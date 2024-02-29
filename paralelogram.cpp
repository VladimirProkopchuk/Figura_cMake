#include "paralelogram.h"
#include <iostream>
using namespace std;

paralelogram::paralelogram(int _a, int _b, int _A, int _B) :fourgolnic(_a, _b, _a, _b, _A, _B, _A, _B) {
    a = _a; b = _b; A = _A; B = _B;
}
void paralelogram::print() {
    cout << name << endl;
    info();
}