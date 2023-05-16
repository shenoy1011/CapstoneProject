#!/bin/bash
source /root/rootfs/foxy_setup.sh; ros2 bag play -r 1 -s rosbag_v2 --loop $1
