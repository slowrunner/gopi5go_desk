#!/bin/bash

basedir=gopi5go_desk

echo -e "\n*** REBUILDING ROS2 gopi5go_desk ***"

echo "*** Executing rebuild.sh ***"

echo "*** cd ~/GoPi5Go/ros2ws"
cd ~/$basedir/ros2ws

echo "*** rosdep install -i --from-path src"
rosdep install -i --from-path src


echo "*** colcon build --packages-select ros2_gopigo3_msg "
colcon build --packages-select ros2_gopigo3_msg

echo "*** colcon build --packages-select dave_interfaces "
colcon build --packages-select dave_interfaces

echo "*** colcon build --packages-select teleop_gopigo3_keyboard"
colcon build --symlink-install --packages-select teleop_gopigo3_keyboard

echo "** colcon build --symlink-install --packages-select scan_client"
colcon build --symlink-install --packages-select scan_client

echo "** colcon build --symlink-install --packages-select explorer_wanderer"
colcon build --symlink-install --packages-select explorer_wanderer

echo "** colcon build --symlink-install --packages-select gopi5go_dave"
colcon build --symlink-install --packages-select gopi5go_dave

echo -e "\n*** . install/setup.bash"
. install/setup.bash

echo "*** REBUILD DONE"
