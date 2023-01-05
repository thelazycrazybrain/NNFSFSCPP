// License
// TheLazyCrazyBrain (MIT License, Copyright(c) 2022 Jodie Watson)
#pragma once
#include <malloc.h>

// Transposes the tensor (1 or 2 dimensional array).
// You can alternatively look at the array differently because the array is stored linearely in memory
// Data interpretation as transposed: *(tensor + (col * tensor_rows) + row)
// Data interpretation regular: *(tensor + (row * tensor_cols) + col)
double_t* transpose(double_t* tensor, size_t tensor_rows, size_t tensor_cols) {
	double_t* result = (double*)malloc(sizeof(double_t) * tensor_rows * tensor_cols);
	if (!result) return NULL;
	for (size_t row = 0; row < tensor_rows; row++) {
		for (size_t col = 0; col < tensor_cols; col++) {
			*(result + (col * tensor_rows) + row) = *(tensor + (row * tensor_cols) + col);
		}
	}
	return result;
}



// Adds a scalar to a tensor (1 or 2 dimensional c array)
void add_scalar(double_t* tensor, size_t tensor_rows, size_t tensor_cols, double_t scalar) {
	for (size_t row = 0; row < tensor_rows; row++) {
		for (size_t col = 0; col < tensor_cols; col++) {
			*(tensor + (row * tensor_rows) + col) += scalar;
		}
	}
}

// Adds a vector to a tensor (1 or 2 dimensional c array)
void add_vector(double_t* tensor, size_t tensor_rows, size_t tensor_cols, double_t vector[]) {
	for (size_t row = 0; row < tensor_rows; row++) {
		for (size_t col = 0; col < tensor_cols; col++) {
			*(tensor + (row * tensor_rows) + col) += vector[col];
		}
	}
}

//// Creates the dot product of two vectors.
//double_t dot_product_vector(double_t vector_a[], double_t vector_b[], size_t vector_len) {
//	double_t result = 0;
//	for (size_t i = 0; i < vector_len; i++) {
//		result += vector_a[i] * vector_b[i];
//	}
//	return result;
//}

//// Calculates the dot product of a matrix and the vector
//// Results in a vector with the length of "rows"
//double_t* dot_product(double_t* matrix, size_t matrix_rows, size_t matrix_cols, double_t* vector) {
//	double_t* result = (double_t*)malloc(sizeof(double_t) * matrix_rows);
//	if (!result) return NULL;
//	for (size_t row = 0; row < matrix_rows; row++) {
//		for (size_t col = 0; col < matrix_cols; col++) {
//			*(result + row) += *(matrix + (row * matrix_cols) + col) * vector[col];
//		}
//	}
//
//	return result;
//}

// Calculates the dot product of two tensors (matrix x matrix, matrix x vector, vector x vector)
double_t* dot_product(double_t* tensor_a, double_t* tensor_b, size_t tensor_a_rows, size_t tensor_a_cols, size_t tensor_b_cols) {
	double_t* result = (double_t*)malloc(sizeof(double_t) * tensor_a_rows * tensor_b_cols);
	if (!result) return NULL;
	for (size_t l1 = 0; l1 < tensor_a_rows; l1++) {
		for (size_t r2 = 0; r2 < tensor_b_cols; r2++) {
			for (size_t l2 = 0; l2 < tensor_a_cols; l2++) {
				*(result + tensor_b_cols * l1 + r2) +=
					*(tensor_a + tensor_a_cols * l1 + l2) *
					*(tensor_b + tensor_b_cols * l2 + r2);
			}
		}
	}
}
