#ifndef SHAMIR_H
#define SHAMIR_H
#include "exponentiation.h"
#include "evklid.h"
#include <qmath.h>
class Shamir{
private:
    Exponentiation exponent;
    Evklid evklid;
public:
    Shamir();

};

#endif // SHAMIR_H
