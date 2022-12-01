#!/usr/bin/env python3
 
import rclpy
from rclpy.node import Node

from std_msgs.msg import String
from sensor_msgs.msg import Image

class MinimalSubscriber(Node):

    def __init__(self):
        super().__init__('minimal_subscriber')
        self.got_image = False

        self.subscription = self.create_subscription(
            Image,
            'rgbd_camera/depth_image',
            self.listener_callback,
            1)
        self.subscription  # prevent unused variable warning

    def listener_callback(self, msg):

        if not self.got_image:
            image = msg.data

            f = open("imagedata.txt", "w")

            for i in image:
                f.write(str(i) + '\n')

            f.close()
#            self.get_logger().info(str(msg))
            self.got_image = True

        self.get_logger().info('image received')


def main(args=None):
    rclpy.init(args=args)

    minimal_subscriber = MinimalSubscriber()

    rclpy.spin(minimal_subscriber)

    # Destroy the node explicitly
    # (optional - otherwise it will be done automatically
    # when the garbage collector destroys the node object)
    minimal_subscriber.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
