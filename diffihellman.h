#ifndef DIFFIHELLMAN_H
#define DIFFIHELLMAN_H
#include "exponentiation.h"
#include <time.h>
#include <QTime>

class DiffiHellman
{
public:
    DiffiHellman();
    void crypt();
private:
    Exponentiation expp;
    long p, q, g, y, intYa, intYb, intZab, intZba, Zab, Zba, Ya, Yb;
};

#endif // DIFFIHELLMAN_H
