#include "shamir.h"
Shamir::Shamir(){
    int m, Ca, Cb, Da, p;
    cout << "m = ", cin >> m, cout << endl;
    cout << "P = ", cin >> p, cout << endl;
    do{
        Ca = qrand() % (p - 2) - 1;
    }while(evklid.gcd(p - 1, Ca) != 1);
    do{
        Cb = qrand() % (p - 2) - 1;
    }while(evklid.gcd(p - 1, Cb) != 1);
    cout << "Ca = " << Ca << endl;
    cout << "Cb = " << Cb << endl;
    Da =  evklid.inverse(Ca, p - 1);
    if (Da < 0) Da = (p - 1) + Da;
    int Db = evklid.inverse(Cb, p - 1) ;
    if (Db < 0) Db = (p-1) + Db;
    cout << "Da = "<< Da << " Db = "<< Db <<endl;
    int x1 = exponent.exponentiation(m, Ca, p);
    int x2 = exponent.exponentiation(x1, Cb, p);
    int x3 = exponent.exponentiation(x2, Da, p);
    int x4 = exponent.exponentiation(x3, Db, p);
    cout << " x1 = "<< x1 << " x2 = "<< x2 << " x3 = "<< x3 << " x4 = "<< x4;
}

