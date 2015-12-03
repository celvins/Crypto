#ifndef MENU_H
#define MENU_H
#include "exponentiation.h"
#include "elgamal.h"

class menu{
private:
    int key;
    Exponentiation exponent;
    ElGamal * elGamal;
public:
    menu();
    ~menu();
};

#endif // MENU_H
