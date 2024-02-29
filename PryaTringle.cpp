#include "PryaTringle.h"
#include <iostream>
using namespace std;

PryaTringle::PryaTringle(int _a, int _b, int _c, int _A, int _B) : Tringle(_a, _b, _c, _A, _B, 90) {
	a = _a; b = _b; c = _c;
	A = _A; B = _B;
}
void PryaTringle::print() {
	cout << name << endl;
	info();
}