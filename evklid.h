#ifndef EVKLID_H
#define EVKLID_H
#include <iostream>
using namespace std;

class Evklid{
public:
    Evklid();
    int gcd(int, int);
    void mod_gcd();
    int evk(int, int);
    void extended_euclid(long, long, long *, long *, long *);
    long inverse(long, long);
    long prostoe();

};
#endif // EVKLID_H
