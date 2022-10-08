#include <cstdlib>
#include <iostream>
#include "Integer.h"
#include "Util.h"
using namespace std;

int main() {

    Integer* i = new Integer("123456789");
    Integer* j = new Integer("123456789");

    cout << i->sumar(j) << endl << endl;

    return 0;
}

