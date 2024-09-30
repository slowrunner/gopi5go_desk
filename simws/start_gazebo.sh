#!/bin/bash


echo -e "\n*** Start gpg3_gazebo with gpg3_square_world with GPG3_MODEL=gopi5go_dave"
export GPG3_MODEL=gopi5go_dave

ros2 launch gpg3_gazebo gpg3_square.launch.py
