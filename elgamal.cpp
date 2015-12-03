/*
 * author: Vardanyan Andranik Eduardovich
 *
 *
 * */
#include "elgamal.h"
ElGamal::ElGamal(){
    cout << "p = "; cin >> this->p; cout << endl;
    cout << "c = "; cin >> this->c; cout << endl;
    cout << "m = "; cin >> this->m; cout << endl;
    crypt();
}
void ElGamal::crypt(){
    srand(time(NULL));
    int g = rand() % (this->p - 2) + 1;
    int d = expp.exponentiation(g, this->c, this->p);
    int k = rand() % (this->p - 2) + 1; // 1 < k < (p-1)
    int r = expp.exponentiation(g, k, this->p);
    int e = m * expp.exponentiation(d, k, this->p) % this->p;
    cout << "(g, d, r, e, k) = " << "(" << g << ", " << d << ", " << r << ", " << e << ", " << k << ")" << endl;
    cout << e * expp.exponentiation(r, this->p - 1 - c, this->p) % this->p;
    cout << endl;
}

