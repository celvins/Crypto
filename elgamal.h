/*
 * author: Vardanyan Andranik Eduardovich
 *
 *
 * */
#ifndef ELGAMAL_H
#define ELGAMAL_H
#include "exponentiation.h"
#include <stdlib.h>
#include <math.h>
#include <time.h>

class ElGamal{
private:
    Exponentiation expp;
    int p, c, m;
public:
    ElGamal();
    void crypt();

};

#endif // ELGAMAL_H
