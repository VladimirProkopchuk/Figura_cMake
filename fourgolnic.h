#pragma once
#include <string> 

class fourgolnic
{
private:
    int a; int b; int c; int d;
    int A; int B; int C; int D;
    std::string name = "Четырехугольник";
public:
    fourgolnic(int _a, int _b, int _c, int _d, int _A, int _B, int _C, int _D);
    virtual void print();
    void info();
};