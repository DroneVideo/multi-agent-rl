from model_interfaces.srv import Model

import rclpy
from rclpy.node import Node
import numpy as np
import torch

class PredictService(Node):

    def __init__(self):
        super().__init__('predict')
        self.srv = self.create_service(Model, 'predict', self.model_callback)

    def predict(self, input):
        tensor = torch.tensor([2])

        return float(torch.multiply(tensor, torch.tensor([input]))[0])

    def model_callback(self, request, response):
        response.output = self.predict(request.input)
        self.get_logger().info('Incoming request\ninput: %f, output: %f\n' % (request.input, response.output)) # CHANGE

        return response

def main(args=None):
    rclpy.init(args=args)

    predict_service = PredictService()

    rclpy.spin(predict_service)

    rclpy.shutdown()
