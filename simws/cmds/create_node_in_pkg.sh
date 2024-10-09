#!/bin/bash

basedir=gopi5go_desk
echo -e "\n*** Switching to ~/${basedir}/simws"
cd ~/$basedir/simws

echo -e "\n*** Sourcing /opt/ros/humble/setup.bash"
. /opt/ros/humble/setup.bash

echo -e "\n*** Sourcing install/setup.bash"
. ~/$basedir/simws/install/setup.bash


if [ "$#" -ne 2 ]; then
  echo "USAGE: cmds/create_node_in_pkg.sh node_name pkg_name"
  exit
fi
echo -e "\n*** CREATE ROS 2 NODE $1 IN PACKAGE $2"
echo -e "ros2 pkg create --build-type ament_python --node-name $1 $2"
pushd src
ros2 pkg create --build-type ament_python --node-name $1 $2
popd

