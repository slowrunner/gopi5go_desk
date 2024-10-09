#!/usr/bin/env python3

"""
FILE:  wallfollow_ml.py

DOC:  Wall Following Using Q-Learning

Ref: https://github.com/BennettSpitz51/wall_follower/blob/main/wall_follower.py

Goals: 
- robot drives with a wall on its left
- keep the wall to the left of the robot within a certain distance
- don't crash into walls

During training mode:
- If the robot is within a certain distance (left_ok), give it a reward.
- If the robot is too close, penalize it slightly
- If it has crashed (front_blocked), penalize big time.

Q-Learning involves discovering state transitions with probability of goal achievement

This wallfollower has states:
- front_blocked
- left_ok
- left_too_close
- left_too_far  (includes no left wall at all)

The wallfollower has available actions:
- move_forward (drive forward with no turning)  linear.x=0.3m/s
- turn_left  (turn left while moving forward)   linear.x=0.05m/s, angular.z=0.3 rad/s (CCW)
- turn_right (turn right while moving forward)  linear.x=0.05m/s, angular.z= -0.3 rad/s (CW)
- wall_turn  (only spin, no forward motion)     linear.x=0,       angular.z= -0.2 rad/s (CW)
"""

"""
Original:

import rospy
import random
import numpy as np
from sensor_msgs.msg import LaserScan
from geometry_msgs.msg import Twist
from std_srvs.srv import Empty

class WallFollower:
    def __init__(self):
        rospy.init_node('wall_follower', anonymous=True)
        self.cmd_pub = rospy.Publisher('/cmd_vel', Twist, queue_size=30)
        rospy.Subscriber('/scan', LaserScan, self.laser_calc)
        self.twist = Twist()
        self.dw = 0.75  
        self.alpha = 0.5  
        self.gamma = 0.9  
        self.epsilon = 1.0  
        self.epsilon_decay = 0.995  
        self.epsilon_min = 0.1
        self.q_table = {}  
        self.state = None  
        self.steps = 0
        self.episodes = 0
        self.training = True
        self.max_steps = 3000
        self.max_episodes = 5000
        rospy.wait_for_service('/gazebo/reset_simulation')
        self.reset_gazebo = rospy.ServiceProxy('/gazebo/reset_simulation', Empty)

    def reset_simulation(self):
        rospy.loginfo("Resetting simulation...")
        self.steps = 0
        self.state = None  
        self.twist.linear.x = 0.0
        self.twist.angular.z = 0.0
        self.cmd_pub.publish(self.twist)
        try:
            self.reset_gazebo()
            rospy.loginfo("Gazebo simulation reset successfully.")
        except rospy.ServiceException as e:
            rospy.logwarn("Failed to reset Gazebo simulation: %s" % e)

    def laser_calc(self, data):
        left_dist = min(data.ranges[40:150])
        front_dist = min(min(data.ranges[340:360]), min(data.ranges[0:20]))
        next_state = self.find_state(left_dist, front_dist)
        if self.training:
            self.q_learning_step(next_state)
        else:
            self.take_action(next_state)
        self.steps += 1
        if front_dist < 0.25:
            rospy.loginfo("Collision detected! Calculating negative reward and resetting simulation...")
            self.q_learning_step('front_blocked')  
            self.reset_simulation()  
            self.episodes += 1

        elif self.steps >= self.max_steps:
            rospy.loginfo("Max steps reached, resetting simulation...")
            self.reset_simulation()
            self.episodes += 1

        if self.episodes >= self.max_episodes and self.training:
            rospy.loginfo("Training finished. Testing phase starting...")
            self.training = False
            self.episodes = 0
            self.max_episodes = 10  
            self.epsilon = 0  

    def find_state(self, left_dist, front_dist):
        if front_dist < 0.50:
            return 'front_blocked'
        elif left_dist < 0.70:
            return 'left_too_close'
        elif left_dist > 0.80:
            return 'left_too_far'
        else:
            rospy.loginfo("LEFT OK")
            return 'left_ok'

    def take_action(self, state):
        if state not in self.q_table:
            self.q_table[state] = {'move_forward': 0.0, 'turn_left': 0.0, 'turn_right': 0.0, 'wall_turn': 0.0}
        if random.uniform(0, 1) < self.epsilon:
            action = random.choice(list(self.q_table[state].keys()))  
        else:
            action = max(self.q_table[state], key=self.q_table[state].get)  
        self.perform_action(action)
        return action

    def perform_action(self, action):
        if action == 'move_forward':
            self.twist.linear.x = 0.3
            self.twist.angular.z = 0.0
            rospy.loginfo("MOVE FORWARD")
        elif action == 'turn_left':
            self.twist.linear.x = 0.05
            self.twist.angular.z = 0.3
            rospy.loginfo("TURN LEFT")
        elif action == 'turn_right':
            self.twist.linear.x = 0.05
            self.twist.angular.z = -0.3
            rospy.loginfo("TURN RIGHT")
        elif action == 'wall_turn':
            self.twist.linear.x = 0.0
            self.twist.angular.z = -0.2
            rospy.loginfo("WALL TURN")
        self.cmd_pub.publish(self.twist)

    def q_learning_step(self, next_state):
        if self.state is None:
            self.state = next_state
            return
        if self.state not in self.q_table:
            self.q_table[self.state] = {'move_forward': 0.0, 'turn_left': 0.0, 'turn_right': 0.0, 'wall_turn': 0.0}
        if next_state not in self.q_table:
            self.q_table[next_state] = {'move_forward': 0.0, 'turn_left': 0.0, 'turn_right': 0.0, 'wall_turn': 0.0}
        action = self.take_action(self.state)
        reward = self.calculate_reward(next_state)
        old_value = self.q_table[self.state][action]
        next_max = max(self.q_table[next_state].values())
        self.q_table[self.state][action] = old_value + self.alpha * (reward + self.gamma * next_max - old_value)
        self.state = next_state

    def calculate_reward(self, state):
        if state == 'front_blocked':
            return -500  
        elif state == 'left_ok':
            return 50  
        elif state == 'left_too_close':
            return 1
        else:
            return -1  

if __name__ == '__main__':
    try:
        wf = WallFollower()
        rospy.spin()
    except rospy.ROSInterruptException:
        pass

"""

import rclpy
import math
from rclpy.node import Node
from rclpy.executors import ExternalShutdownException
import sys
from sensor_msgs.msg import LaserScan    # (header, child_frame_id, ...
import logging
import datetime as dt
from rclpy.time import Time

# pick one of the following qos profile methods - explicit or named profile
# from rclpy.qos import ReliabilityPolicy, QoSProfile
from rclpy.qos import qos_profile_sensor_data

from statistics import mean

DEBUG = False

# Uncomment for debug prints to console
DEBUG = True

NUM_READINGS = 14

class WallFollowML(Node):


  def __init__(self):
    super().__init__('wallfollow_ml')

    self.sub = self.create_subscription(
      LaserScan,
      'scan',
      self.sub_callback,
      # pick one from following- explicit or named profile
      # QoSProfile(depth=10, reliability=ReliabilityPolicy.BEST_EFFORT))
      qos_profile_sensor_data)  # best effort depth 10 sensor profile

    self.sub  # prevent unused var warning
    print('\n*** /scan topic subscriber created')
    self.left = []
    self.right = []
    self.front = []
    self.back = []
    self.debug_info_count = 0
    self.left_count = 0
    self.right_count = 0
    self.front_count = 0
    self.back_count = 0
    if DEBUG:
        self.lc2_always0 = "yes"
        self.lc1_always0 = "yes"
        self.c_always0 = "yes"
        self.rc1_always0 = "yes"
        self.rc2_always0 = "yes"

  def sub_callback(self,scan_msg):
    num_ranges = len(scan_msg.ranges)
    i_front_range = int(num_ranges/2)-1  # exact front ? 
    i_back_range = num_ranges - 1
    i_left_range = int(num_ranges * 0.75)
    i_right_range = int(num_ranges/4)

    # i_front_range = i_back_range

    if scan_msg.ranges[i_left_range] > 0:
        self.left += [scan_msg.ranges[i_left_range]]
        self.left_count += 1
    if len(self.left) > NUM_READINGS: self.left = self.left[-NUM_READINGS:]

    if scan_msg.ranges[i_right_range] > 0: 
        self.right += [scan_msg.ranges[i_right_range]]
        self.right_count += 1
    if len(self.right) > NUM_READINGS: self.right = self.right[-NUM_READINGS:]

    if scan_msg.ranges[i_front_range] > 0: 
        self.front += [scan_msg.ranges[i_front_range]]
        self.front_count += 1
    if len(self.front) > NUM_READINGS: self.front = self.front[-NUM_READINGS:]

    if scan_msg.ranges[i_back_range] > 0: 
        self.back += [scan_msg.ranges[i_back_range]]
        self.back_count += 1
    if len(self.back) > NUM_READINGS: self.back = self.back[-NUM_READINGS:]

    if len(self.left)>1: 
        dist_left_90 = format(mean(self.left), '.3f')
    else:
        dist_left_90 = "    "

    if len(self.right)>1: 
        dist_right_90 = format(mean(self.right), '.3f')
    else:
        dist_right_90 = "    "

    if len(self.front)>1: 
        dist_front_0 = format(mean(self.front), '.3f')
    else:
        dist_front_0 = "    "

    if len(self.back)>1: 
        dist_back_180 = format(mean(self.back), '.3f')
    else:
        dist_back_180 = "    "

    if DEBUG:
        self.debug_info_count += 1
        if self.debug_info_count % 9 == 1:
            
            print("\n\n************* DEBUG {} **********".format(int(self.debug_info_count/9)))
            print('*** Entering Scan Client Callback')
            print('*** angle_min: {:.0f} max: {:.0f} increment: {:.2f}'.format(
                math.degrees(scan_msg.angle_min),
                math.degrees(scan_msg.angle_max),
                math.degrees(scan_msg.angle_increment)))
            print('\n*** range[{}] index - left {} front {} back {} right {}'.format(
                num_ranges, i_left_range, i_front_range, i_back_range, i_right_range))

            print('\nleft: {:.3f} cnt: {}'.format(scan_msg.ranges[i_left_range], self.left_count))
            print('\nfront: {:.3f} cnt: {}'.format(scan_msg.ranges[i_front_range],self.front_count))
            print('\nback: {:.3f} cnt: {}'.format(scan_msg.ranges[i_back_range], self.back_count))
            print('\nright: {:.3f} cnt: {}'.format(scan_msg.ranges[i_right_range],self.right_count))

            lc2 = int(num_ranges/2)-3
            lc1 = lc2+1
            c  = lc2+2
            rc1 = lc2+3
            rc2 = lc2+4
            if scan_msg.ranges[lc2] > 0: self.lc2_always0 = "no"
            if scan_msg.ranges[lc1] > 0: self.lc1_always0 = "no"
            if scan_msg.ranges[c] > 0:  self.c_always0 = "no"
            if scan_msg.ranges[rc1] > 0: self.rc1_always0 = "no"
            if scan_msg.ranges[rc2] > 0: self.rc2_always0 = "no"
            print('\nscan_msg.ranges[{}]: {:.3f} always 0? {}'.format(lc2, scan_msg.ranges[lc2], self.lc2_always0))
            print('scan_msg.ranges[{}]: {:.3f} always 0? {}'.format(lc1, scan_msg.ranges[lc1],self.lc1_always0))
            print('scan_msg.ranges[{}]: {:.3f} always 0? {}'.format(c, scan_msg.ranges[c],self.c_always0))
            print('scan_msg.ranges[{}]: {:.3f} always 0? {}'.format(rc1, scan_msg.ranges[rc1],self.rc1_always0))
            print('scan_msg.ranges[{}]: {:.3f} always 0? {}'.format(rc2, scan_msg.ranges[rc2],self.rc2_always0))


            print("************* DEBUG **********\n")

    print(f'left: {dist_left_90} front: {dist_front_0} back: {dist_back_180} right: {dist_right_90}',end="\r")





def main(args=None):

  rclpy.init(args=args)
  wallfollow_ml_node = WallFollowML()
  try:
    rclpy.spin(wallfollow_ml_node)
  except KeyboardInterrupt:
      pass
  except ExternalShutdownException:
      sys.exit(0)
  finally:
    wallfollow_ml_node.destroy_node()
    try:
        rclpy.try_shutdown()
    except:
        pass


if __name__ == '__main__':
  main()
