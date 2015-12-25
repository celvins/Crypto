#include "rsa.h"
#include <time.h>

RSA::RSA()
{
   cout << "m = "; cin >> m; cout << endl;
   rsa();
}
void RSA::rsa(){
    qsrand(time(0) + 1);
    long p, q, d, C, k;
    do{
        q = evklid.prostoe();
        p = evklid.prostoe();
    }while(m > p * q);
    long N = p * q;
    long F = (p-1) * (q - 1);
    do{
        d = qrand() % (F - 2) - 1;
    }while (evklid.gcd(F, d) != 1);
    cout << "p = " << p << endl;
    cout << "q = " << q << endl;
    cout << "N = " << N << endl;
    cout << "F = " << F << endl;
    cout << "d = " << d << endl;
    do{
        C = qrand() % 300;
    }while(exponent.exponentiation(C*d, 1, F) != 1);
    cout << "C = " << C << endl;
    long e = exponent.exponentiation(m, d, N);
    long m1 = exponent.exponentiation(e, C, N);
    cout << "e = " << e << endl;
    cout << "m = " << m1 << endl;

}
