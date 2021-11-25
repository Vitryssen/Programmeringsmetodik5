#include "MyBinOp.h"

MyBinOp::MyBinOp(int numberOfElements) : numberOfElements(numberOfElements)
{
}

double MyBinOp::operator()(double value, GPU& gpu)
{
	return value + (gpu.getPrice() / numberOfElements);
}
