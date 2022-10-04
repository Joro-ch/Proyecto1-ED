#include <cstdlib>
#include <iostream>
#include "Integer.h"
#include "Util.h"
using namespace std;

int main() {
    
    Array<int>* list = new Array<int>(5);
    
    int* x1 = new int(1);
    int* x2 = new int(2);
    int* x3 = new int(3);
    int* x4 = new int(4);
    
    list->add(x1);
    list->add(x2);
    list->add(x3);
    list->add(x4);
    
    cout << list;
    
    system("pause");
    return 0;
}

/* Prueba para obtener los digitos de los numeros;
 
    string palabra;
    
    palabra = "13211565";
    
    for(int i = 0; i < palabra.size(); i++) {
        cout << Util::posiblesNumeros(palabra[i]) << " - ";
    }

 
    /////////////////////////////////////////////////
 
    Integer* i = NULL;
    string numero = "";
    
    cout << "Ingrese un numero: ";
    cin >> numero;
    
    i = new Integer(numero);
    
    cout << i;
 */