#!/bin/bash
source /opt/ros/foxy/setup.bash;
source install/setup.bash;
ros2 topic echo /project_result
