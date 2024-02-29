#pragma once
#include "fourgolnic.h"
#include <string>
class Tringle
{
private:
	std::string name = "Треугольник";
	int a;  int b;  int c;
	int A; int B; int C;
public:
	Tringle(int _a, int _b, int _c, int _A, int _B, int _C);
	void print();
	virtual void info()const;
};