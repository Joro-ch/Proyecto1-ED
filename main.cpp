#include <cstdlib>
#include <iostream>
#include "Integer.h"
#include "Util.h"
using namespace std;




int main() {
    
    string palabra;
    
    palabra = "13211565";
    
    for(int i = 0; i < palabra.size(); i++) {
        cout << Util::posiblesNumeros(palabra[i]) << " - ";
    }
    
    return 0;
}

