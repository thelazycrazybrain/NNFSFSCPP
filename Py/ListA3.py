# License
# Original source by Sentdex (MIT License, Copyright (c) 2020 Sentdex, Kinsley Enterprises Inc., https://nnfs.io)
# Modified by TheLazyCrazyBrain (MIT License, Copyright (c) 2022 Jodie Watson)
import numpy as np


def list_a3():
    inputs = [1, 2, 3, 2.5]
    weights = [[0.2, 0.8, -0.5, 1],
               [0.5, -0.91, 0.26, -0.5],
               [-0.26, -0.27, 0.17, 0.87]]
    biases = [2, 3, 0.5]

    layer_outputs = np.dot(weights, inputs) + biases
    print (layer_outputs)


if __name__ == '__main__':
    list_a3()
