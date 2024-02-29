#include "fourgolnic.h"
#include <iostream>
#include <string>
using namespace std;

fourgolnic::fourgolnic(int _a, int _b, int _c, int _d, int _A, int _B, int _C, int _D) {
    a = _a; b = _b; c = _c; d = _d;
    A = _A; B = _B; C = _C; D = _D;
}
void fourgolnic::print() {
    cout << name << endl;
    info();
}
void fourgolnic::info() {
    cout << "Сторона a = " << a << " Сторона b = " << b << " Сторона c = " << c << " Сторона d = " << d << endl;
    cout << "Угол A = " << A << " Угол B = " << B << " Угол C = " << C << " Угол D = " << D << endl;
}