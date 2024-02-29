#pragma once
#include "fourgolnic.h"
class paralelogram : public fourgolnic
{
private:
    std::string name = "ֿאנאככוכמדנאלל";
    int a, b, A, B;
public:
    paralelogram(int _a, int _b, int _A, int _B);
    void print();
};