#!/bin/bash
basedir=gopi5go_desk

cd ~/$basedir/ros2ws

echo "Cleaning ros2ws build/install/log"
rm -rf log
rm -rf install
rm -rf build

echo "Clean Complete"
