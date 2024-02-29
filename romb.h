#pragma once
#include "fourgolnic.h"
class romb : public fourgolnic
{
private:
    std::string name = "Ромб";
    int a, A, B;
public:
    romb(int _a, int _A, int _B);
    void print();
};