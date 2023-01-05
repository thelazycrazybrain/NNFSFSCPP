//#include "device_launch_parameters.h"

#include <stdio.h>
#include <cuda_runtime.h>

__global__ void VecAdd(float* a, float* b, float* c) {
	int i = threadIdx.x;
	c[i] = a[i] + b[i];
}

int main()
{

	VecAdd <<<1, N >>> (A, B, C);
}



