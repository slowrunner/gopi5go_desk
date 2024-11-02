#!/bin/bash


echo -e "ros2 launch gpg3_navigation2 navigation2.launch.py map:=maps/floorplan.map.yaml "
ros2 launch gpg3_navigation2 navigation2.launch.py map:=maps/gpg3_square.map.yaml use_sim_time:=True
