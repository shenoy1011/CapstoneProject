#!/bin/bash
source /root/rootfs/foxy_setup.sh; (ros2 run rqt_image_view rqt_image_view &); python3 /root/rootfs/image_subscriber-ros2.py
