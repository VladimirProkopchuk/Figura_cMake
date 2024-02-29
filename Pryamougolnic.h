#pragma once
#include "fourgolnic.h"
#include <string>
class Pryamougolnik : public fourgolnic
{
private:
	int a, b;
	std::string name = "Прямоугольник";
public:
	Pryamougolnik(int _a, int _b);
	void print();
};