#include "evklid.h"
#include <QTime>
#include <time.h>
Evklid::Evklid(){

}
long Evklid::prostoe(){
        long a;
//        qsrand(time(NULL) + 1);
        while(1)
        {
            int z=0;
            a=1+qrand()%50;
            for(int i=2;i<a;i++)
            {
                if(a%i==1)
                    continue;
                if(a%i==0)
                {
                    z=1;
                    break;
                }
            }
            if(z==0) break;
        }
        return a;
}

void Evklid::extended_euclid(long a, long b, long *x, long *y, long *d)
    /* вычисление a * *x + b * *y = gcd(a, b) = *d */
    {
    long q, r, x1, x2, y1, y2;
    if (b == 0) {
    *d = a, *x = 1, *y = 0;
    return;
    }

    x2 = 1, x1 = 0, y2 = 0, y1 = 1;
    while (b > 0) {
    q = a / b, r = a - q * b;
    *x = x2 - q * x1, *y = y2 - q * y1;
    a = b, b = r;
    x2 = x1, x1 = *x, y2 = y1, y1 = *y;
    }

    *d = a, *x = x2, *y = y2;
}

long Evklid::inverse(long a, long n)
    /* вычисление инверсии модуля n */
    {
    long d, x, y;
    extended_euclid(a, n, &x, &y, &d);
    if (d == 1) return x;
    return 0;
}

int Evklid::gcd(int a, int b){
    while(a != 0 && b != 0){if(a > b) a %= b; else b %= a;}
    return (a + b);
}
void Evklid::mod_gcd(){
    int a, b, x, y, q, r, x1, x2, y1, y2;
    cout << "##########\nEvklid\nCalculate: a*x + b*x = gcd(a,b)\n##########" << endl;
    cout << "a = "; cin >> a;
    cout << "b = "; cin >> b;
     if(b == 0){cout << "nod = " << a << "\nx = " << 1 << "\ny = " << 0 << endl;return;}
     x2 = 1, x1 = 0, y2 = 0, y1 = 1;
     while(b > 0){
       q = a / b;
       r = a - q * b;
       x = x2 - q * x1; y = y2 - q * y1;
       a = b; b = r;
       x2 = x1; x1 = x;
       y2 = y1; y1 = y;
     }
     cout << "x = " << x2 << endl;
     cout << "y = " << y2 << endl;
     cout << "gcd(a,b) = " << a;
}




