#pragma once
#ifndef MYUNOP_H
#define MYUNOP_H
#include "gpu.h"
class MyUnOp {
public:
	double operator()(GPU& cpu);
};
#endif // !MYUNOP_H
