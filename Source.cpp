#include "gpu.h"
#include "MyPrint.h"
#include "MyBinOp.h"
#include "MyUnOp.h"
#include "MyFunc.h"
#include "Greater.h"
#include <stdlib.h>
#include <time.h> 
#include <vector>
#include <algorithm>
#include <iostream>
#include <numeric>
int main() {
	srand(time(NULL));
	GPU gpus[] = {
		GPU("RTX3090",rand()),
		GPU("RTX3080",rand()),
		GPU("RTX3070",rand()),
		GPU("RTX3060",rand()),
		GPU("RTX3050",rand()),
		GPU("RTX3050",rand())
	};
	int arrSize = sizeof(gpus) / sizeof(gpus[0]);
	std::vector<GPU> gpuVector(gpus, gpus + arrSize);
	//#1
	std::cout << "List of GPUs\n";
	std::for_each(gpuVector.begin(), gpuVector.end(), MyPrint());
	//#2
	double price = 200;
	std::cout << "\nFirst GPU more expensive than " << price << ": " << std::endl;
	MyPrint()(*(std::find_if(gpuVector.begin(), gpuVector.end(), Greater(price))));
	//#3
	auto adj = std::adjacent_find(gpuVector.begin(), gpuVector.end());
	std::cout << "\nFirst adjecent GPU:\n";
	if (adj != gpuVector.end())
		MyPrint()(*adj);
	//#4
	std::cout << "\nArray equals Vector: " << std::boolalpha << std::equal(gpuVector.begin(), gpuVector.end(), &gpus[0]) << "\n";
	//#5
	int rangeStart = 1;
	int rangeStop = 3;
	std::cout << "\nGPUs in range of " << rangeStart+1 << "-" << rangeStop+1 << "\n";
	std::for_each(std::search(gpuVector.begin(), gpuVector.end(), &gpus[rangeStart], &gpus[rangeStop]), gpuVector.begin()+rangeStop+rangeStart, MyPrint());
	//#6
	double mean = std::accumulate(gpuVector.begin(), gpuVector.end(), 0.0, MyBinOp(gpuVector.size()));
	std::cout << "\nMean price: " << mean << '\n';
	//#7
	std::vector<double> v2;
	v2.resize(gpuVector.size());
	std::transform(gpuVector.begin(), gpuVector.end(), v2.begin(), MyUnOp());
	//#8
	std::transform(v2.begin(), v2.end(), v2.begin(), MyFunc(mean));
	std::cout << "\nUnsorted \n";
	for (auto e : v2) {
		std::cout << "Value: " << e << std::endl;
	}
	//#9
	std::sort(v2.begin(), v2.end());
	std::cout << "\nSorted\n";
	for (auto e : v2) {
		std::cout << "Value: " << e << std::endl;
	}
	return 0;
}