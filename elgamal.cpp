/*
 * author: Vardanyan Andranik Eduardovich
 *
 *
 * */
#include "elgamal.h"
ElGamal::ElGamal(){
    cout << "q = "; cin >> this->q; cout << endl;
    cout << "c = "; cin >> this->c; cout << endl;
    cout << "m = "; cin >> this->m; cout << endl;
    crypt();
}
void ElGamal::crypt(){
    srand(time(NULL));
    long g = rand() % (this->p - 2) + 1; //g^qmodp <> 1 (
    p = 2 * q + 1;
    do{
        g = rand() % (this->p - 2) + 1;
    }while(expp.exponentiation(g, q, p) != 1);
    long d = expp.exponentiation(g, this->c, this->p);
    long k = rand() % (this->p - 2) + 1; // 1 < k < (p-1)
    long r = expp.exponentiation(g, k, this->p);
    long e = m * expp.exponentiation(d, k, this->p) % this->p;
    cout << "(g, d, r, e, k) = " << "(" << g << ", " << d << ", " << r << ", " << e << ", " << k << ")" << endl;
    cout << e * expp.exponentiation(r, this->p - 1 - c, this->p) % this->p;
    cout << endl;
}

