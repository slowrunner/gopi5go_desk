#!/bin/bash

echo -e "\n*** REBUILDING simws ***"

echo "*** Executing rebuild.sh ***"

echo "*** rosdep install -i --from-path src"
rosdep install -i --from-path src


echo "*** colcon build --packages-select gpg3_msg "
colcon build --packages-select gpg3_msgs --allow-overriding gpg3_msgs

echo "*** colcon build --packages-select gpg3_gazebo "
colcon build --packages-select gpg3_gazebo --allow-overriding gpg3_gazebo

echo "*** colcon build --packages-select gpg3_fake_node "
colcon build --packages-select gpg3_fake_node  --allow-overriding gpg3_fake_node

echo "*** colcon build --packages-select gpg3_simulations "
colcon build --packages-select gpg3_simulations

echo "*** colcon build --packages-select gpg3_cartographer "
colcon build --packages-select gpg3_cartographer

echo "*** colcon build --packages-select gpg3_navigation2 "
colcon build --packages-select gpg3_navigation2

echo "*** colcon build --packages-select testnodes "
colcon build --packages-select testnodes


echo -e "\n*** . install/setup.bash"
. install/setup.bash

echo -e "\n*** REBUILD DONE ***"
