#pragma once
#ifndef MYFUNC_H
#define MYFUNC_H
class MyFunc {
private:
	double mean;
public:
	MyFunc(double mean);
	double operator()(double value);
};
#endif // !MYFUNC_H