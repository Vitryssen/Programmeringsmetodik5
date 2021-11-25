#pragma once
#ifndef MYPRINT_H
#define MYPRINT_H
#include "gpu.h"
class MyPrint{
public:
	void operator()(GPU& gpu);
};
#endif // !MYPRINT_H
