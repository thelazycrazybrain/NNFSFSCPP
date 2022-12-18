// License
// TheLazyCrazyBrain (MIT License, Copyright(c) 2022 Jodie Watson)

#include <iostream>

void print_vector(const size_t rows, const double_t* vector) {
	std::cout << "[ ";
	for (size_t row = 0; row < rows; row++) {
		std::cout << (row == rows - 1 ? "%lf" : "%lf, ", *(vector + row));
	}
	std::cout << " ]\n";
}

void print_matrix(const size_t rows, const size_t cols, const double_t* matrix) {
	for (size_t row = 0; row < rows; row++)
	{
		std::cout << "{ ";
		for (size_t col = 0; col < cols; col++)
		{
			double_t val = *(matrix + (row * cols) + col);
			std::cout << (col == cols - 1 ? std::(val));
			if (col == cols - 1) {
				
			}
			std::cout << (col == cols - 1 ? std::fixed(("%lf" : "%lf, ", *(matrix + (row * cols) + col));
		}
		std::cout << " }\n";

	}
}
void list_a1() {
	double_t inputs[]{ 1, 2, 3, 2.5 };
	double_t weights[3][4]{ {0.2, 0.8, -0.5, 1},
							  {0.5, -0.91, 0.26, -0.5},
							  {-0.26, -0.27, 0.17, 0.87} };
	double_t biases[]{ 2, 3, 0.5 };

	double_t layer_outputs[3]{ 0 };

	double_t neuronValue = 0;
	for (size_t neuronIndex = 0; neuronIndex < sizeof(biases) / sizeof(double_t); neuronIndex++) {
		neuronValue = biases[neuronIndex];
		for (size_t weightIndex = 0; weightIndex < sizeof(weights[neuronIndex]) / sizeof(double_t); weightIndex++) {
			layer_outputs[neuronIndex] += inputs[weightIndex] * weights[neuronIndex][weightIndex];
		}
	}


}

int main()
{
	double_t n[]{ 1,2,3,4,5,6,7,8,9,10 };
	double_t nn[3][10]{ {11,12,13,14,15,16,17,18,19,20},
				{ 21,22,23,24,25,26,27,28,29,20 } };
	print_array(n, sizeof(n) / sizeof(double_t));
	print_arrays(&nn, 10);
	system("pause");

}
