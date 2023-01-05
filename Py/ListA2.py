# License
# Original source by Sentdex (MIT License, Copyright (c) 2020 Sentdex, Kinsley Enterprises Inc., https://nnfs.io)
# Modified by TheLazyCrazyBrain (MIT License, Copyright (c) 2022 Jodie Watson)
import numpy as np


def list_a2():
    inputs = [1.0, 2.0, 3.0, 2.5]
    weights = [0.2, 0.8, -0.5, 1.0]
    bias = 2.0

    outputs = np.dot(weights, inputs) + bias

    print(outputs)


if __name__ == '__main__':
    list_a2()
