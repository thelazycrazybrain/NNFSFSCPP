import numpy as np


def list_a4():
    # Features (3 samples, 4 values)
    inputs = [[1, 2, 3, 2.5],
              [2.0, 5.0, -1.0, 2.0],
              [-1.5, 2.7, 3.3, -0.8]]
    # 3 Neurons, 4 Inputs
    weights = [[0.2, 0.8, -0.5, 1],
               [0.5, -0.91, 0.26, -0.5],
               [-0.26, -0.27, 0.17, 0.87]]
    # 3 Neurons
    biases = [2, 3, 0.5]

    layer_outputs = np.dot(inputs, np.array(weights).T) + biases
    # Transpose weights to be able to perform Matrix Product
    # Add bias -> matrix + vector -> adds vector to each row
    print (layer_outputs)


if __name__ == '__main__':
    list_a4()
