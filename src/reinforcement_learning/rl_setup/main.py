"""
Code adapted from https://pytorch.org/tutorials/intermediate/mario_rl_tutorial.html
"""


from DroneEnv import DroneEnv
import torch
from Drone import Drone

WIDTH = 10
HEIGHT = 10
CHANNELS = 4

env = DroneEnv(WIDTH, HEIGHT, CHANNELS)

use_cuda = torch.cuda.is_available()

drone = Drone(state_dim=(CHANNELS, WIDTH, HEIGHT), action_dim=env.action_space.n)

episodes = 10
for e in range(episodes):

    state = env.reset()

    # Play the game!
    while True:

        # Run agent on the state
        action = drone.act(state)

        # Agent performs action
        next_state, reward, done, trunc, info = env.step(action)

        # Remember
        drone.cache(state, next_state, action, reward, done)

        # Learn
        q, loss = drone.learn()

        # Logging

        # Update state
        state = next_state

        # Check if end of game
        if done:
            break

drone.save('directory')