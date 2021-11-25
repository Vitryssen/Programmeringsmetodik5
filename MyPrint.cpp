#include "MyPrint.h"
#include "gpu.h"
#include <iostream>
void MyPrint::operator()(GPU& gpu)
{
	std::cout << "Model: " << gpu.getName() << " | Price: " << gpu.getPrice() << "\n";
}
