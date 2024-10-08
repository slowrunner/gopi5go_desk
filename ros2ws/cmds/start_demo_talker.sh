#!/bin/bash

basedir=gopi5go_desk
echo -e "\n*** Switching to ~/${basedir}/ros2ws"
cd ~/$basedir/ros2ws

echo -e "\n*** Sourcing /opt/ros/humble/setup.bash"
. /opt/ros/humble/setup.bash

echo -e "\n*** Sourcing install/setup.bash"
. ~/$basedir/ros2ws/install/setup.bash

echo "Starting ROS2 Demo C++ talker - (Ctrl-c to quit)"
set -v
ros2 run demo_nodes_cpp talker

