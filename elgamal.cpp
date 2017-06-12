/*
 * author: Vardanyan Andranik Eduardovich
 *
 *
 * */
#include "elgamal.h"
#include "evklid.h"
ElGamal::ElGamal(){
    cout << "1 - crypt\n2 - ECP\n";
    int a; cin >> a;
    if(a == 1){
        cout << "c = "; cin >> this->c; cout << endl;
        cout << "m = "; cin >> this->m; cout << endl;
        if(this->m < this->c){ cout << "error c > m"; exit(0);}
        crypt();
    }
    else ECP();
}
void ElGamal::crypt(){
    srand(time(NULL));
    Evklid a;
    long g = rand() % (this->p - 2) + 1; //g^qmodp <> 1 (
    q = a.prostoe();
    p = 2 * q + 1; // p q простые !!!!!
    do{
        g = 1+rand() % (this->p - 2) + 1;
    }while(expp.exponentiation(g, q, p) != 1);
    long d = expp.exponentiation(g, this->c, this->p);
    long k = rand() % (this->p - 2) + 1; // 1 < k < (p-1)
    long r = expp.exponentiation(g, k, this->p);
    long e = m * expp.exponentiation(d, k, this->p) % this->p;
    cout << "(g, d, r, e, k) = " << "(" << g << ", " << d << ", " << r << ", " << e << ", " << k << ")" << endl;
    cout << e * expp.exponentiation(r, this->p - 1 - c, this->p) % this->p;
    cout << endl;
}
void ElGamal::ECP(){
    Evklid a;
    int p, g, x, k = 0, m, s, y, r;
   // cout << "p ="; cin>>p;//простое
   // cout << "g ="; cin>>g; //g^qmodp != 1
    cout << "m ="; cin>>m;
    do{
        x=0 + rand() % 100;
        q = a.prostoe();
        p = 2 * q + 1; // p q простые !!!!!
        do{
            g = rand() % (this->p - 2) + 1;
        }while(expp.exponentiation(g, q, p) != 1);
        y = expp.exponentiation(g,x,p);
        k = 1 + rand() % (p-2);
        cout << "k = " << k << "\ny = " << y << "\n x = " << x << endl;
        r = expp.exponentiation(g, k, p);
        int kInv = a.inverse(k,p-1);
        if (kInv < 0) kInv = (p - 1) + kInv;
        int u = (m - x * r) % (p-1);
        if(u < 0 ) u = (abs(u)+1) * (p-1) + (m-x*r); // если остаток от деления отрицательный
        cout << "\nu = " << u << endl;
        s = (u * kInv) % (p-1);
        cout << "r = " << r <<"\ns= " << s <<endl;
    }while(s==0);
    if(expp.exponentiation(pow(y,r)*pow(r,s),1,p) != expp.exponentiation(g,m,p)){
        cout << "error ECP"; exit(0);
    }
    else{
        cout << "ECP good!";
    }
}

