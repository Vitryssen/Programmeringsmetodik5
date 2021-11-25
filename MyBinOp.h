#pragma once
#ifndef MYBINOP_H
#define MYBINOP_H
#include "gpu.h"
class MyBinOp {
private:
	int numberOfElements;
public:
	MyBinOp(int numberOfElements);
	double operator()(double value, GPU& gpu);
};
#endif // !MYBINOP_H
