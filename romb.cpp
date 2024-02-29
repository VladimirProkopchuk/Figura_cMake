#include "romb.h"
#include <iostream>
using namespace std;

romb::romb(int _a, int _A, int _B) :fourgolnic(_a, _a, _a, _a, _A, _B, _A, _B) {
    a = _a; A = _A; B = _B;
}
void romb::print() {
    cout << name << endl;
    info();
}