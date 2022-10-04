#include <cstdlib>
#include <iostream>
#include "Integer.h"
#include "Util.h"
using namespace std;

int main() {
    
//    LinkedList<Array<int>*>* list = new LinkedList<Array<int>*>();
//    Array<int>* arr = new Array<int>(5); 
//    
//    int* x1 = new int(1);
//    int* x2 = new int(2);
//    int* x3 = new int(3);
//    int* x4 = new int(4);
//    
//    arr->add(x1);
//    arr->add(x2);
//    arr->add(x3);
//    arr->add(x4);
//    
//    list->add(&arr);
//    
//    cout << arr << endl;
//    cout << list << endl;
    
    Integer* i = NULL;
    string numero = "";
    
    cout << "Ingrese un numero: ";
    cin >> numero;
    
    i = new Integer(numero);
    
    cout << i;
    
    return 0;
}

/* Prueba para obtener los digitos de los numeros;
 
    string palabra;
    
    palabra = "13211565";
    
    for(int i = 0; i < palabra.size(); i++) {
        cout << Util::posiblesNumeros(palabra[i]) << " - ";
    }

 
    /////////////////////////////////////////////////
 
    
 */