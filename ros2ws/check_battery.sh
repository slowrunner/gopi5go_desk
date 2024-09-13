#!/bin/bash

echo -e "\n*** Checking Battery with ROS2"; \
echo "ros2 topic echo --once /battery_state"; \
ros2 topic echo --once /battery_state; \
