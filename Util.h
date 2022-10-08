#ifndef UTIL_H
#define UTIL_H
#include<iostream>
#include<sstream>
#include"Array.h"
using namespace std;

class Util {
public:
    static int* posiblesNumeros(char);
    static int pow(int, int);
    static int cantidadDigitos(int);
    static string itos(int);
    static string invertirCadena(string);
    static int tamMaximo(int, int);
};

#endif 

