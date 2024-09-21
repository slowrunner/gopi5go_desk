#!/bin/bash

export ROS_DOMAIN_ID=0

# run rviz2 for GoPi5Go-Dave with navigation setup
ros2 run rviz2 rviz2 -d /opt/ros/humble/share/nav2_bringup/rviz/nav2_default_view.rviz

