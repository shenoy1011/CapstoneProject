#!/bin/bash
source /opt/ros/foxy/setup.bash;
colcon build --packages-select project_package
colcon build --packages-select traffic_light_interfaces
