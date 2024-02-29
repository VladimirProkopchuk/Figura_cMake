#pragma once
#include "fourgolnic.h"
#include <string>
class Kvadrat : public fourgolnic
{
private:
	int a;
	std::string name = " вадрат";
public:
	Kvadrat(int _a);
	void print();
};
