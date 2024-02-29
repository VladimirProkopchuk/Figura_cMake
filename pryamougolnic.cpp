#include "Pryamougolnic.h"
#include <iostream>
using namespace std;

Pryamougolnik::Pryamougolnik(int _a, int _b) :fourgolnic(_a, _b, _a, _b, 90, 90, 90, 90) {
	a = _a; b = _b;
}
void Pryamougolnik::print() {
	cout << name << endl;
	info();
}