#include <cstdlib>
#include <iostream>
#include "Integer.h"
#include "Util.h"
using namespace std;

int main() {
    
    Integer* i = NULL;
    string numero = "";
    
    cout << "Ingrese un numero: ";
    cin >> numero;
    
    i = new Integer(numero);
    
    cout << i->toString();
    
    system("pause");
    return 0;
}




/* Prueba para obtener los digitos de los numeros;
 
    string palabra;
    
    palabra = "13211565";
    
    for(int i = 0; i < palabra.size(); i++) {
        cout << Util::posiblesNumeros(palabra[i]) << " - ";
    }
 
 */