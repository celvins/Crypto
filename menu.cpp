#include "menu.h"
menu::menu(){
    while(key != 10){
         cout
                 << "\n\n##########" << endl
                 << "Main Menu" << endl
                 << "##########\n" << endl;
        cout
             << "0 - vozvedenie v stepen" << endl
             << "1 - shifr El-Gamal" << endl
             << "2 - Evklid" << endl
             << "3 - Shamir" << endl
             << "4- Diffi" << endl
             << "5- RSA" << endl
             << "10 - exit" << endl;
        cin >> key;
        switch (key){
            case 0:
                exponent.exponentiation();
                break;
            case 1:
                elGamal = new ElGamal();
                break;
            case 2:
                evklid.mod_gcd();
                break;
            case 3:
                shamir = new Shamir();
                break;
            case 4:
                diffi = new DiffiHellman();
                break;
            case 5:
                rsa = new RSA();
                break;
            case 10:
                cout << "exit";
                break;
            default:
                cout << "Error";
                break;
        }
    }
}
menu::~menu(){
    delete elGamal;
}

