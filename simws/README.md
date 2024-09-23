# GoPiGo3 SIMULATION WORKSPACE

This workspace uses Gazebo Classic version 11
with files modified from turtlbot3_*

### Install ROS 2 Gazebo Classic
sudo apt install ros-humble-gazebo-ros-pkgs

### Install Turtlebot3 packages
sudo apt install ros-humble-turtlebot3*


To build:  
```
./rebuild.sh
```

Remeber to source the built packages  
(and exports ROS_DOMAIN_ID=1 so robot GoPi5Go-Dave does not listen)
```
source ss.sh  
```

GPG3_MODEL: gopigo3  

WORLDS: gpg3_world.world  gpg3_house.world  empty_world.world  gpg3_square.world
(gpg3_square.world is turtlebot3_dqn_stage2.world)

MAPS:  gpg3world.yaml  floorplan.map.yaml (not gpg3_house floorplan)

### Launch gpg3_gazebo  
ros2 launch gpg3_gazebo gpg3_world.launch.py  
or
ros2 launch gpg3_gazebo gpg3_square.launch.py  

### Launch cartographer to make map  
ros2 launch gpg3_cartographer cartographer.launch.py  

### To save a new map  
ros2 run nav2_map_server map_saver_cli -f maps/my_new_map  

### Launch gpg3 navigation and use sim time  
(ctrl-shift o to split Terminator terminal)  
ros2 launch gpg3_navigation2 navigation2.launch.py use_sim_time:=True map:=maps/gpg3world.yaml  

- in Rviz2  
  - click 2D Pose Estimate button and click/point approximately where bot is and heading  
  - click "Nav2 Goal" button and click/point a goal  

  - Waypoint Following or Nav Through Poses  
    On the Rviz2 Navigation pane, select "Waypoint/Nav Through Poses Mode"  
    Click Nav2 Goal, set a goal, repeat for a couple goals,   
    then Click "Start Nav Through Poses" or "Start Waypoint Following"  
