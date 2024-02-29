#include "kvadrat.h"
#include  <iostream>
using namespace std;

Kvadrat::Kvadrat(int _a) : fourgolnic(_a, _a, _a, _a, 90, 90, 90, 90) {
	a = _a;
}
void Kvadrat::print() {
	cout << name << endl;
	info();
}