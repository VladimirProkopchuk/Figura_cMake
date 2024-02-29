#include "RavSTringle.h"
#include <iostream>
using namespace std;

RavSTringle::RavSTringle(int _a) :Tringle(_a, _a, _a, 60, 60, 60) {
	a = _a;
}
void RavSTringle::print() {
	cout << name << endl;
	info();
}