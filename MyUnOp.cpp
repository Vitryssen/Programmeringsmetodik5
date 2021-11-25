#include "MyUnOp.h"

double MyUnOp::operator()(GPU& cpu)
{
	return cpu.getPrice();
}
