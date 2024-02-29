#pragma once
#include "Tringle.h"
#include <string>
class RavSTringle :public Tringle
{
private:
	std::string name = "Равносторонний треугольник";
	int a;
public:
	RavSTringle(int _a);
	void print();
};