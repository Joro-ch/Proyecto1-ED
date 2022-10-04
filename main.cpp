#include <cstdlib>
#include <iostream>
#include "Integer.h"
#include "Util.h"
using namespace std;

int main() {
    
    Array<int>* x = new Array<int>();
    
    int y = 100;

    x->add(&y);

    cout << &x << endl;

    return 0;
}




/* Prueba para obtener los digitos de los numeros;
 
    string palabra;
    
    palabra = "13211565";
    
    for(int i = 0; i < palabra.size(); i++) {
        cout << Util::posiblesNumeros(palabra[i]) << " - ";
    }
 
 */