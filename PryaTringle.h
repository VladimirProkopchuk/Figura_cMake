#pragma once
#include "Tringle.h"
#include <string>

class PryaTringle :public Tringle
{
private:
	std::string name = "Прямоугольный треугольник";
	int a; int b; int c;
	int A; int B;
public:
	PryaTringle(int _a, int _b, int _c, int _A, int _B);
	void print();
};
