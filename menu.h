#ifndef MENU_H
#define MENU_H
#include "exponentiation.h"
#include "elgamal.h"
#include "evklid.h"
#include "shamir.h"
#include "diffihellman.h"
class menu{
private:
    int key;
    Exponentiation exponent;
    ElGamal * elGamal;
    Evklid evklid;
    Shamir * shamir;
    DiffiHellman * diffi;
public:
    menu();
    ~menu();
};

#endif // MENU_H
