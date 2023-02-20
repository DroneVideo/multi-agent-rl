#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from rclpy.duration import Duration
import tf2_ros
import numpy as np
from std_msgs.msg import Bool
from geometry_msgs.msg import Twist, Pose
from nav_msgs.msg import Odometry
from rover_control import compute_control
from rover_planning import RoverPlanner
from tf.transformations import quaternion_from_euler, euler_from_quaternion


class RoverAgent(Node):

    def __init__(self, positions):
        super().__init__('rover_controller')
        self.pub_cmd = self.create_publisher('cmd_vel', Twist, 10)
        self.sub_odom = self.create_subscriber('odom', Odometry, self.sub_odom)
        self.rover_pose = Pose()
        self.run()

    def sub_odom(self, msg):
        self.rover_pose = msg.pose.pose

    def move(self, v, omega):
        msg = Twist()
        msg.linear.x = v
        msg.linear.y = 0
        msg.linear.z = 0
        msg.angular.x = 0
        msg.angular.y = 0
        msg.angular.z = omega
        self.pub_cmd.publish(msg)

    def get_pose():
        self.rover_pose
