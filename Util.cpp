#include "Util.h"

int* Util::posiblesNumeros(char digito) {
    switch (digito)
    {
        case '0': return new int(0); break;
        case '1': return new int(1); break;
        case '2': return new int(2); break;
        case '3': return new int(3); break;
        case '4': return new int(4); break;
        case '5': return new int(5); break;
        case '6': return new int(6); break;
        case '7': return new int(7); break;
        case '8': return new int(8); break;
        case '9': return new int(9); break;
        default: return new int(0); break;
    }
}

int Util::pow(int num, int elev)
{
    int numInicial = num;
    switch (elev)
    {
        case 0: num = 1; break;
        case 1: num = num; break;
        default: 
            if (numInicial != 0 && numInicial != 1) {
                for (int i = 1; i < elev; i++) {
                    num *= numInicial;
                }
            }
        break;
    }
   
    return num;
}

int Util::cantidadDigitos(int num)
{
    int canDigitos = 0;
    while (num % 2 != 0) {
        num /= 10;
        canDigitos++;
    }
    return canDigitos;
}

string Util::itos(int n)
{
    stringstream s;
    s << n;
    return s.str();
}

string Util::invertirCadena(string s)
{
    char aux;
    int tam = s.length();
    for (int i = 0; i < tam / 2; i++) {
        aux = s[i];
        s[i] = s[tam - i - 1];
        s[tam - i - 1] = aux;
    }

    return s;
}

int Util::tamMaximo(int a, int b)
{
    if (a > b) {
        return a;
    }
    return b;
}
