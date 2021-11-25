#pragma once
#ifndef GREATER_H
#define GREATER_H
#include "gpu.h"
class Greater {
private:
	double compareValue;
public:
	Greater(const double value);
	bool operator()(GPU& gpu);
};
#endif // !GREATER_H