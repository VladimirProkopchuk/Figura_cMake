#include "RavBedTringle.h"
#include <iostream>
using namespace std;

RavBedTringle::RavBedTringle(int _a, int _b, int _A, int _B) : Tringle(_a, _b, _a, _A, _B, _A) {
	a = _a; b = _b;
	A = _A; B = _B;
}
void RavBedTringle::print() {
	cout << name << endl;
	info();
}
