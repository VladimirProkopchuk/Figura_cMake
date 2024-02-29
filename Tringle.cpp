#include "Tringle.h"
#include <iostream>
using namespace std;


Tringle::Tringle(int _a, int _b, int _c, int _A, int _B, int _C) {
	a = _a; b = _b; c = _c;
	A = _A; B = _B; C = _C;
}

void Tringle::print() {
	cout << name << endl;
	info();
}
void Tringle::info() const {
	cout << "Сторонa a = " << a << " Сторонa b = " << b << " Сторонa c = " << c << endl;
	cout << "Угол A = " << A << " Угол B = " << B << " Угол C = " << C << endl;
}