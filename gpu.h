#pragma once
#ifndef GPU_H
#define GPU_H
#include <string>
class GPU {
private:
	double price;
	std::string name;
public:
	GPU(std::string name, double price);
	std::string getName();
	double getPrice();
	bool operator==(const GPU& gpu) const;
};
#endif // !CPU_H
