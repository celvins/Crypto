#include "menu.h"
//#include <iostream>
//using namespace std;
menu::menu(){
    cout << "##########" << endl << "Main Menu" << endl << "##########" << endl;
    while(key != 10){
        cout << "0 - vozvedenie v stepen" << endl << "1 - shifr El-Gamal" << endl << "10 - exit" << endl;
        cin >> key;
        switch (key){
            case 0:
                exponent.exponentiation();
                break;
            case 1:
                elGamal = new ElGamal();
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

