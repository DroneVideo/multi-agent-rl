import gym
from gym import spaces
import numpy as np

class DroneEnv(gym.Env):

  def __init__(self, width, height, channels):
    super(DroneEnv, self).__init__()

    self.action_space = spaces.Discrete(height * width)
    
    self.observation_space = spaces.Box(low=0, high=255, shape=
                    (height, width, channels), dtype=np.uint8)

  def step(self, action):
    #TODO send command to ROS, get data back
    #TODO implement reward function
    pass

  def reset(self):
    #TODO send command to ROS
   pass

  def render(self):
    pass