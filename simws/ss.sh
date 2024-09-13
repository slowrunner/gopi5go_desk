#!/bin/bash 

basedir=gopi5go_desk
echo -e "\n*** Switching to ~/${basedir}/simws"
cd ~/$basedir/simws

echo -e "\n*** Sourcing /opt/ros/humble/setup.bash"
. /opt/ros/humble/setup.bash

echo -e "\n*** Sourcing install/setup.bash"
. ~/$basedir/simws/install/setup.bash
