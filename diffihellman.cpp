#include "diffihellman.h"

DiffiHellman::DiffiHellman()
{
    cout << "q = "; cin >> this->q; cout << endl;
    crypt();
}

void DiffiHellman::crypt() {
    qsrand(time(0));
    p = 2 * q + 1;
    do{
        g = rand() % (this->p - 2) + 1;
    }while(expp.exponentiation(g, q, p) != 1);
        cout<<"g = "<< g <<"  q = "<< q <<"  p = "<< p <<endl;
        int a = rand() % 300;
        int b = rand() % 300;
        cout<<"a= "<< a <<endl<<"b= "<< b <<endl;
        intYa = expp.exponentiation(g,a,p);
        intYb = expp.exponentiation(g,b,p);
        cout << "Ya= " << Ya << endl<<"Yb= " << Yb << endl;
        intZab = expp.exponentiation(Yb,a,p);
        intZba = expp.exponentiation(Ya,b,p);
        cout << "Zab= "<< Zab << endl << "Zba= "<< Zba << endl;
        if (Zab == Zba)
               cout<<"OK!!";
}
