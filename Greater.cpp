#include "Greater.h"

Greater::Greater(const double value) : compareValue(value)
{
}

bool Greater::operator()(GPU& gpu)
{
	return gpu.getPrice() > compareValue;
}
