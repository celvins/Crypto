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
    long p, c, m, q;
public:
    ElGamal();
    void crypt();
    void ECP();

};

#endif // ELGAMAL_H
