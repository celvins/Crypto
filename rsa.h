#ifndef RSA_H
#define RSA_H
#include "exponentiation.h"
#include "evklid.h"
#include <qmath.h>

class RSA
{
public:
    RSA();
    void rsa();
private:
    Exponentiation exponent;
    Evklid evklid;
    long m;
};

#endif // RSA_H
