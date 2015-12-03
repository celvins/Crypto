/*
 * author: Vardanyan Andranik Eduardovich
 *
 *
 * */
#include "exponentiation.h"
Exponentiation::Exponentiation(){}
long int Exponentiation::exponentiation(long int a, long int power, long int p){//a^power mod p
    int per, y = 1, t = int(log2(power));
    for (int i = 0; i <= t; i++){
        per = power % 2;
        power = power / 2;
        if(per == 1)
            y = ( y * a ) % p;
        a = ( a * a ) % p;
    }
    return y % p;
}
void Exponentiation::exponentiation(){
    int a, power, p;
    cout << "##########" << endl << "Fast exponentiation" << endl << "Please enter data" << endl << "##########" << endl;
    cout << "a = " << endl;
    cin >> a;
    cout <<"Power = ";
    cin >> power;
    cout <<"P = ";
    cin >> p;
    cout << endl << exponentiation(a, power, p) << endl;
}
int Exponentiation::power(int a, int b, int n){// a^b mod n
    int tmp=a;
    int sum=tmp;
    for(int i=1;i<b;i++){
        for(int j=1;j<a;j++){
            sum+=tmp;
            if(sum>=n){
                sum-=n;
            }
        }
        tmp=sum;
    }
    return tmp;
}
