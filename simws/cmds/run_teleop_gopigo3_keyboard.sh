#!/bin/bash

# FILE: run_teleop_gopigo3_keyboard.sh
# PURPOSE: Start GoPiGo3 robot version of teleop_twist_keyboard

echo -e "\n\n******** STARTING TELEOP GOPIGO3 KEYBOARD ********"

basedir=gopi5go_desk
echo -e "\n*** Switching to ~/${basedir}/simws"
cd ~/$basedir/simws

echo -e "\n*** Sourcing /opt/ros/humble/setup.bash"
. /opt/ros/humble/setup.bash

echo -e "\n*** Sourcing install/setup.bash"
. ~/$basedir/ros2ws/install/setup.bash
. ~/$basedir/simws/install/setup.bash

echo -e "\n*** export ROS_DOMAIN_ID=1 for simulation"

export ROS_DOMAIN_ID=1

echo -e "\n*** Start teleop_gopigo3_keyboard node"
echo "*** ros2 run teleop_gopigo3_keyboard teleop_gopigo3_keyboard"
ros2 run teleop_gopigo3_keyboard teleop_gopigo3_keyboard

