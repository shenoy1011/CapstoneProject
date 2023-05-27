

# Tutorial for Traffic Light Detection Project

In my senior year of college, me and my Capstone team created a YOLOv8-Norfair model to detect traffic lights based on color and flashing types. We aimed to integrate our code for use in General Motors' autonomous vehicle initiative. This guide will walk you through how to run the project's code via Docker and a web browser.



## Prerequisites

1. Operating system must be Linux, Unix, or WSL on Windows 
2. Download [Docker Desktop](https://docs.docker.com/get-docker/), if you don't have it already
3. Access to a terminal that can execute git and make commands
## Repo and Docker Setup

1. Set up code repository by downloading the project's ZIP file through the green top right "Code" button.
2. Utilize your terminal to navigate to the "CapstoneProject" directory. This will be the root directory.
3. Run the command "cd ROS-Docker-Intro" in the terminal. This will send you to the ROS-Docker-Intro directory.
4. Run "make build" in the terminal. This will take 30-40 minutes. Refer to step 5 if you get an error.
5. If you are getting "ERROR: failed to solve: error getting credentials - err: exit status 1, out: ``make: *** [build] Error 1", then run commands "rm ~/.docker/config.json" and "docker login"
6. Through your file manager, locate the Makefile that is within CapstoneProject/ROS-Docker-Intro directory.
7. Click on the Makefile in order to edit it. Comment out line (by using the character '#') starting with “build:” and its below line. Next, uncomment out line starting with “# build:” and its below line. Save these changes.
8. Go back to your terminal and make sure that you are in the ROS-Docker-Intro directory. Run "make build" again in ROS-Docker-Intro directory. This step will take less than 10 minutes to run.
9. Run "make init" in the ROS-Docker-Intro directory. This will take a few seconds to complete. 
10. If you want to stop at this point, you can run "exit". If you want to come back to this point later on, then run "make start" in the ROS-Docker-Intro directory.

## Steps to Run the Project

1. After you have ran "make init" or "make start" from the previous two steps, use a web browser to access [the noVNC page](http://127.0.0.1:6080/vnc.html).
2. Login to the page using "password".
3. Right click on the page's empty space and select the "Terminal emulator" menu. Use this step to open up any new terminal on noVNC. 
4. In the terminal window, run
- cd /root/rootfs/ros2_ws
- bash buildPkg.sh
- If "bash buildPkg.sh" fails, then run 
    - rm -r build/ install/ log/
5. Open a second terminal and run
- source /root/rootfs/foxy_setup.sh; ros2 bag play -r 10 -s rosbag_v2 --loop rootfs/Intersection_2021-06-08-09-26-36.bag
6. Open a third terminal and run
- cd /root/rootfs/ros2_ws
- bash runML.sh
7. Open a fourth terminal and run
- cd /root/rootfs/ros2_ws
- bash runRes.sh
8. In the fourth terminal, you will see bounding box information from our project's ROS custom messages. Additionally, a new window will pop up to show footage of driving with boxes enclosing traffic lights from our project's machine learning model. 
9. Expect laggy footage and error in traffic light detection due to hardware incompatibility. The project's code is expected to run on specific computers and autonomous vehicle hardware. It is expected to not perform well on personal computers due to high RAM needs.


