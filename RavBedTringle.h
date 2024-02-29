#pragma once
#include "Tringle.h"
#include <string>
class RavBedTringle : public Tringle
{
private:
	std::string name = "Равнобедренный треугольник";
	int a; int b;
	int A; int B;
public:
	RavBedTringle(int _a, int _b, int _A, int _B);
	void print();
};