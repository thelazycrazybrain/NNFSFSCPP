// License
// TheLazyCrazyBrain (MIT License, Copyright(c) 2022 Jodie Watson)

#include <stdio.h>
#include <math.h>
#include "Debug.h"
#include "AIMath.h"




int main()
{
	double_t m[][3] = { {1,2,3},
						{4,5,6} };

	double_t v[] = { 1, 2, 3 };
	//double_t* result = transpose_matrix(m, 2, 3);

	double_t* result = transpose(v, 1, 3);

	print_matrix(v, 3, 1);

	//free(result);
	//double_t v1[] = { 1, 2, 3, 4 };
	//double_t v2[] = { 5, 6, 7, 8 };
	////add_scalar_to_vector(5, d, sizeof(d) / sizeof(double_t));

	//double_t result = dot_product_vector(v1, v2, 4);
	//printf_s("%lf\n", result);

	//print_vector(d, sizeof(d) / sizeof(double_t));

	//double_t m[][5] = { { 1 },
	//					{ 2 } };

	//print_matrix(m, 0, 1);
	system("pause");

}
