#include <cstdlib>
#include <iostream>
#include "Integer.h"
#include "Util.h"
using namespace std;

int main() {
    /*Integer* i = new Integer();
    LinkedList<Array<int>*>* list = new LinkedList<Array<int>*>();
    Array<int>* arr = new Array<int>(5); 
        
    int* x1 = new int(1);
    int* x2 = new int(2);
    int* x3 = new int(3);
    int* x4 = new int(4);
        
    arr->add(x1);
    arr->add(x2);
    arr->add(x3);
    arr->add(x4);
      
    cout << i->obtenerSumatoriaElemArray(arr);*/

    //list->add(&arr);
    //    
    //cout << arr << endl;
    //cout << list << endl;

   /* string a = "12375678931234536789";
    cout << Util::invertirCadena(a);*/

//    Integer* i = new Integer("12345");
//    Integer* j = new Integer("12345");
//
//    cout << i->sumar(j)->toString();

    //Integer* x = new Integer("0");

    //cout << i->toString();

  /*  Integer* x = new Integer();
    Array<int>* arr1 = new Array<int>();
    Array<int>* arr2 = new Array<int>();

    int* x1 = new int(9);
    int* x2 = new int(9);
    int* x3 = new int(9);
    int* x4 = new int(9);

    int* x5 = new int(1);
    int* x6 = new int(2);
    int* x7 = new int(3);
    int* x8 = new int(4);

    arr1->add(x1);
    arr1->add(x2);
    arr1->add(x3);
    arr1->add(x4);

    arr2->add(x5);
    arr2->add(x6);
    arr2->add(x7);
    arr2->add(x8);

    cout << arr1 << endl;
    cout << arr2 << endl << endl;

    cout << x->sumarArrays(arr1, arr2);*/

    return 0;
}

/* Prueba para obtener los digitos de los numeros;

    string palabra;

    palabra = "13211565";

    for(int i = 0; i < palabra.size(); i++) {
        cout << Util::posiblesNumeros(palabra[i]) << " - ";
    }


    Prueba para obtener la sumatoria de un array
    Integer* i = new Integer();
    LinkedList<Array<int>*>* list = new LinkedList<Array<int>*>();
    Array<int>* arr = new Array<int>(5);

    int* x1 = new int(1);
    int* x2 = new int(2);
    int* x3 = new int(3);
    int* x4 = new int(4);

    arr->add(x1);
    arr->add(x2);
    arr->add(x3);
    arr->add(x4);

    cout << i->obtenerSumatoriaElemArray(arr);


    Prueba para obtener cantidad de digitos de un numero
    int suma = 11555;
    int canDigitos = 0;

    while (suma % 10 != 0) {
        suma /= 10;
        canDigitos++;
        if (canDigitos > Array<int>::getDefaultCapacity()) {
            cout << "true";
        }
    }
    if (canDigitos <= Array<int>::getDefaultCapacity()) {
        cout << "false";
    }*/