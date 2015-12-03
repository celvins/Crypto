QT += core
QT -= gui

TARGET = Krypto2
CONFIG += console
CONFIG -= app_bundle

TEMPLATE = app

SOURCES += main.cpp \
    exponentiation.cpp \
    elgamal.cpp \
    menu.cpp

HEADERS  += \
    exponentiation.h \
    elgamal.h \
    menu.h
