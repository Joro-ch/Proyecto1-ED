#include <cstdlib>
#include <iostream>
#include "Integer.h"
#include "Util.h"
using namespace std;

int main() {

    Integer* i = new Integer("12345");
    Integer* j = new Integer("12345");

    cout << i->sumar(j) << endl << endl;

    return 0;
}

