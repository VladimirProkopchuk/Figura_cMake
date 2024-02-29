#include <iostream>
#include "fourgolnic.h"
#include "paralelogram.h"
#include "Pryamougolnic.h"
#include "romb.h"
#include "kvadrat.h"
#include "Tringle.h"
#include "PryaTringle.h"
#include "RavBedTringle.h"
#include "RavSTringle.h"


int main() {
    setlocale(LC_ALL, "russian");
    Tringle tringle(8, 4, 3, 60, 90, 30);
    tringle.print();
    PryaTringle Prt(9, 4, 5, 50, 60);
    Prt.print();
    RavBedTringle rbt(4, 5, 70, 60);
    rbt.print();
    RavSTringle ravSTringle(8);
    ravSTringle.print();
    fourgolnic fig(5, 4, 6, 4, 60, 70, 120, 30);
    fig.print();
    paralelogram prl(8, 5, 120, 60);
    prl.print();
    romb rmb(5, 100, 80);
    rmb.print();
    Kvadrat kvd(40);
    kvd.print();
    Pryamougolnik prm(15, 8);
    prm.print();
}