#include "MyFunc.h"
MyFunc::MyFunc(double mean) : mean(mean)
{
}

double MyFunc::operator()(double value)
{
	return value - mean;
}
