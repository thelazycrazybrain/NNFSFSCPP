// License
// TheLazyCrazyBrain (MIT License, Copyright(c) 2022 Jodie Watson)
#pragma once
// Prints a c array (1 dimensional) as vector to the console.
void print_vector(double_t vector[], size_t vector_length) {
	if (vector_length > 0) {
		printf_s("[ ");
		for (int i = 0; i < vector_length; i++) {
			printf_s("%lf, ", vector[i]);
		}
		printf_s("%lf ]\n", vector[vector_length - 1]);
	}
	else {
		printf_s("Zero length array.\n");
	}

}

// Prints a c array (1 or 2 dimensional) as matrix to the console.
// You can display the array transposed, if you switch the values for tensor_rows and tensor_cols.
// If you want to print a vector as matrix, use 1 for tensor_rows
void print_matrix(double_t* tensor, size_t tensor_rows, size_t tensor_cols) {
	if (tensor_rows > 0 && tensor_cols > 0) {
		printf_s("[");
		for (size_t row = 0; row < tensor_rows; row++) {
			if (row == 0) {
				printf_s("[ ");
			}
			else {
				printf_s(" [ ");
			}
			for (size_t col = 0; col < tensor_cols; col++) {
				printf_s("%lf", *(tensor + (row * tensor_cols) + col));
				if (col == tensor_cols - 1) {
					if (row == tensor_rows - 1) {
						printf_s(" ]");
					}
					else {
						printf_s(" ],\n");
					}
				}
				else {
					printf_s(", ");
				}
			}


			if (row == tensor_rows - 1) {
				printf_s("]\n");
			}
		}


	}
	else {
		printf_s("Zero in array dimension ([ %zu, %zu ])\n", tensor_rows, tensor_cols);
	}
}

