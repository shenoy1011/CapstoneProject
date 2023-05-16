#This is a minimal example, checkout full version at https://automaticaddison.com/getting-started-with-opencv-in-ros-2-foxy-fitzroy-python/ and http://wiki.ros.org/cv_bridge/Tutorials
import sys
import cv2
import rclpy
import rclpy.node
import numpy as np
from cv_bridge import CvBridge
from sensor_msgs.msg import Image
from ultralytics import YOLO
from norfair import Detection, Tracker, Video, draw_tracked_objects
from traffic_light_interfaces.msg import BoundingBox, BoundingBoxes, Header
#model = YOLO("yolov8s.pt")  # load a pretrained model
model = YOLO("/root/rootfs/models/best19.onnx")
# model.names doesn't work on onnx models, so we extract
# a dictionary of ids and names from the pytorch model
# print(model.names)
classes = {0: 'go', 1: 'goLeftStop', 2: 'stop', 3: 'stopLeft', 4: 'warning', 5: 'warningLeft', 6: 'warningLeftStop'}
norfairLabeltoGroupField = {0: 4, 2: 6, 3: 1, 4: 5, 5: 0}
norfairLabeltoBlinkingGroupField = {0: 4, 2: 3, 3: 14, 4: 2, 5: 13}
# model.export(format='onnx', dynamic=True, simplify=True)
idsToLastHitCounterValue = {}
idsToMissedDetections = {}
bridge = CvBridge()
tracker = Tracker(distance_function="euclidean", distance_threshold=550, detection_threshold=0.5, initialization_delay = 1, hit_counter_max = 8)


def relevanceFilter(yolo_detections):
    """filters boxes to select the most likely to be relevant"""
    if len(yolo_detections[0].boxes) <= 0:
        return [bbox.data for bbox in yolo_detections[0].boxes]
    detections_as_xyxy = [bbox.data for bbox in yolo_detections[0].boxes]
    new_detections_as_xyxy = []
    areas = []
    for b in detections_as_xyxy:
        area = (b[0][2] - b[0][0]) * (b[0][3] - b[0][1])
        areas.append(area)
    max_area = max(areas)
    for b in detections_as_xyxy:
        if (b[0][2] - b[0][0]) * (b[0][3] - b[0][1]) >= (max_area * 0.45):
            new_detections_as_xyxy.append(b)
    return new_detections_as_xyxy

def relevanceFilter2(yolo_detections):
    """filters boxes to select the most likely to be relevant"""
    if len(yolo_detections[0].boxes) <= 0:
        return [bbox.data for bbox in yolo_detections[0].boxes]
    detections_as_xyxy = [bbox.data for bbox in yolo_detections[0].boxes]
    detections_as_xyxy_with_area = []
    for b in detections_as_xyxy:
        area = (b[0][2] - b[0][0]) * (b[0][3] - b[0][1])
        detections_as_xyxy_with_area.append([b, int(area)])

    # sort detections in ascending order by bbox area
    detections_as_xyxy_with_area.sort(key=lambda x: x[1])

    areas = [det[1] for det in detections_as_xyxy_with_area]
    
    # estimate the threshold based on the IQR
    q1, q3 = np.percentile(areas, [25, 75])
    iqr = q3 - q1
    threshold = iqr / 2
    print(threshold)
    
    # group adjacent numbers that are close in size into sets
    sets = []
    current_set = []
    for i in range(len(detections_as_xyxy_with_area)):
        print(detections_as_xyxy_with_area[i][1])
        if i == 0 or abs(detections_as_xyxy_with_area[i][1] - detections_as_xyxy_with_area[i-1][1]) <= threshold:
            current_set.append(detections_as_xyxy_with_area[i])
        else:
            sets.append(current_set)
            current_set = [detections_as_xyxy_with_area[i]]
    sets.append(current_set)

    print(len(sets))

    sets_with_max = []
    for s in sets:
        new_sub_list = s
        new_sub_list.append(max(s, key=lambda x: x[1])[1])
        sets_with_max.append(new_sub_list)
    
    # sort the sets by their maximum value and select the last (i.e., largest) set
    sets_with_max.sort(key=lambda x: x[-1])
    largest_set = sets_with_max[-1]
    
    largest_set_less_max = largest_set[:-1]
    largest_set_only_detections = [element[0] for element in largest_set_less_max]
    return largest_set_only_detections

def yolo_detections_to_norfair_detections(yolo_detections):
    """convert detections_as_xyxy to norfair detections"""
    norfair_detections = []
    #detections_as_xyxy = [bbox.data for bbox in yolo_detections[0].boxes]
    detections_as_xyxy = relevanceFilter(yolo_detections)
    
    for detection_as_xyxy in detections_as_xyxy:
        bbox = np.array(
            [
                [detection_as_xyxy[0][0], detection_as_xyxy[0][1]],
                [detection_as_xyxy[0][2], detection_as_xyxy[0][3]],
            ]
        )
        scores = np.array(
            [detection_as_xyxy[0][4], detection_as_xyxy[0][4]]
        )
        norfair_detections.append(
            Detection(
                points=bbox, scores=scores, label=int(detection_as_xyxy[0][-1])
            )
        )

    return norfair_detections

def callback_Img(data):
    img = bridge.imgmsg_to_cv2(data, desired_encoding='rgb8')
    cv2_img = bridge.imgmsg_to_cv2(data, desired_encoding='bgr8')
    #cv2_img is 2048x2048
    # res = model.track(cv2_img[256:1024, 512:1536], show=True, tracker='rootfs/customtracker.yaml')
    res = model.predict(cv2_img[256:1024, 512:1536], show=False, conf=0.25)
    detections = yolo_detections_to_norfair_detections(res)
    tracked_objects = tracker.update(detections=detections)
    if (not idsToLastHitCounterValue and not idsToMissedDetections):  # if hashmaps are not initialized
        for track in tracked_objects:
            idsToLastHitCounterValue[track.id] = track.hit_counter
            idsToMissedDetections[track.id] = 0
    else:
        idsToDelete = set()    # Norfair will delete an id if the tracked object goes out of frame, so we need to records these ids
        for id in idsToLastHitCounterValue.keys():
            idsToDelete.add(id) 

        for track in tracked_objects:
            if idsToLastHitCounterValue.get(track.id) is not None and idsToLastHitCounterValue[track.id] > track.hit_counter:   # If current hit_counter is less than past, it indicates missed matching with YOLO detection
                idsToMissedDetections[track.id] += 1
            elif idsToLastHitCounterValue.get(track.id) is None:
                idsToLastHitCounterValue[track.id] = track.hit_counter
                idsToMissedDetections[track.id] = 0
            idsToDelete.discard(track.id)

        for id in idsToDelete:        # Delete ids from hashmap
            idsToLastHitCounterValue.pop(id)
            idsToMissedDetections.pop(id)
    # draw_tracked_objects(cv2_img[256:1024, 512:1536], tracked_objects)
    resultPubMsg = BoundingBoxes()
    print(idsToMissedDetections)
    for track in tracked_objects:
        x1 = int(track.estimate[0][0])
        y1 = int(track.estimate[0][1])
        x2 = int(track.estimate[1][0])
        y2 = int(track.estimate[1][1])
        norfairLabel = track.last_detection.label
        cv2.rectangle(cv2_img[256:1024, 512:1536], (x1, y1), (x2, y2), (0,255,0), 2)
        boundingBoxMsg = BoundingBox()
        boundingBoxMsg.probability = float(track.last_detection.scores[0])
        boundingBoxMsg.xmin = x1
        boundingBoxMsg.ymin = y1
        boundingBoxMsg.xmax = x2
        boundingBoxMsg.ymax = y2
        boundingBoxMsg.id = track.id
        ratio = idsToMissedDetections[track.id] / track.age 
        if ((track.age > 3 and ratio > 0.125 and ratio < 0.7) and not (norfairLabel == 0)):
            cv2.putText(cv2_img[256:1024, 512:1536], str(track.id) + ': blinking ' + classes[norfairLabel], (x1, y1-10), cv2.FONT_HERSHEY_SIMPLEX, 0.9, (36,255,12), 2)
            print(str(track.id) + ': blinking ' + classes[norfairLabel])
            if (norfairLabel == 1):
                boundingBoxMsg.group.append(15)
                boundingBoxMsg.group.append(3)
            elif (norfairLabel == 6):
                boundingBoxMsg.group.append(13)
                boundingBoxMsg.group.append(3)
            else:
                boundingBoxMsg.group.append(norfairLabeltoGroupField[norfairLabel])    
        else:
            cv2.putText(cv2_img[256:1024, 512:1536], str(track.id) + ': ' + classes[norfairLabel], (x1, y1-10), cv2.FONT_HERSHEY_SIMPLEX, 0.9, (36,255,12), 2)
            print(str(track.id) + ': ' + classes[norfairLabel])
            if (norfairLabel == 1):
                boundingBoxMsg.group.append(15)
                boundingBoxMsg.group.append(6)
            elif (norfairLabel == 6):
                boundingBoxMsg.group.append(0)
                boundingBoxMsg.group.append(6)
            else:
                boundingBoxMsg.group.append(norfairLabeltoBlinkingGroupField[norfairLabel])
        resultPubMsg.bounding_boxes.append(boundingBoxMsg)
    
    resultPubMsg.header.stamp = data.header.stamp
    resultPubMsg.header.frame_id = data.header.frame_id
    resultPub.publish(resultPubMsg)
    cv2.namedWindow("image", cv2.WINDOW_NORMAL)
    cv2.imshow('image', cv2_img[256:1024, 512:1536])
    cv2.waitKey(1)
    #print(res)
    # cv2.namedWindow('Image window', cv2.WINDOW_KEEPRATIO)
    # cv2.imshow("Image window", cv2_img)
    # cv2.resizeWindow('Image window', 1280, 1280)
    # cv2.waitKey(0)
    # gray = cv2.cvtColor(img, cv2.COLOR_BGR2GRAY)
    # grayImageMsg = CvBridge().cv2_to_imgmsg(gray.astype(np.uint8))
    # grayImageMsg.header = data.header
    # grayImageMsg.encoding = '8UC1'
    # grayImgPub.publish(grayImageMsg)
    '''
    boxData=[]
    rI=0
    for r in res:
        boxes=r.boxes
        bI=0
        for box in boxes:
            print(str(rI)+":"+str(bI))
            b=box.xyxy[0]
            clss = box.cls[0].item()
            conf = box.conf[0].item()

            xmin = b[0].item()
            ymin = b[1].item()
            xmax = b[2].item()
            ymax = b[3].item()

            bID = box.id
            print(str(b)+" "+str(clss)+","+str(conf)+","+str(xmin)+","+str(ymin)+","+str(xmax)+","+str(ymax))
    '''
rclpy.init()
colorImgSub = rclpy.node.Node('image_subscriber')
colorImgSub.create_subscription(Image, '/camera/left/image_raw', callback_Img, 1000)
resultPub = rclpy.node.Node('result_publisher').create_publisher(BoundingBoxes, '/project_result', 10)
# grayImgPub = rclpy.node.Node('image_publisher').create_publisher(Image, '/img_gray', 10)
rclpy.spin(colorImgSub)
