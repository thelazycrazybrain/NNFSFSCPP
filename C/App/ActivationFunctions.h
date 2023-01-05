// License
// TheLazyCrazyBrain (MIT License, Copyright(c) 2022 Jodie Watson)
#pragma once
#include <math.h>

// Calculates the rectified linear unit for a scalar.
double_t ReLU(double_t value) {
	if (value >= 0) return value;
	return 0;
}