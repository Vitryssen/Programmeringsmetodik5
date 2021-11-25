#include "gpu.h"

GPU::GPU(std::string name, double price) : name(name), price(price)
{
}

std::string GPU::getName()
{
	return name;
}

double GPU::getPrice()
{
	return price;
}

bool GPU::operator==(const GPU& gpu) const
{
	return name == gpu.name;
}
