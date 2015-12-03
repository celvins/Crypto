#include <QCoreApplication>
#include <iostream>
#include "menu.h"
using namespace std;
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    menu main_menu;
    return a.exec();
}

