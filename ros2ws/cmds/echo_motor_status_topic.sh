#!/bin/bash

basedir=gopi5go_desk
echo -e "\n*** Switching to ~/${basedir}/ros2ws"
cd ~/$basedir/ros2ws

echo -e "\n*** Sourcing /opt/ros/humble/setup.bash"
. /opt/ros/humble/setup.bash

echo -e "\n*** Sourcing install/setup.bash"
. ~/$basedir/ros2ws/install/setup.bash

echo -e "\n*** Capturing one motor status topic (flow-style):"
echo "*** ros2 topic echo --once --flow-style /motor/status"
ros2 topic echo --once --flow-style /motor/status

