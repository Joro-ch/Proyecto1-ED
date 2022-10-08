#ifndef INTEGER_H
#define INTEGER_H
#include"LinkedList.h"
#include"Array.h"
#include"Util.h"
#include<string>

#define ZERO 0;
#define ONE 1;

class Integer {
public:

    // ------------------------------------------------------------

    Integer();
    Integer(string);
    Integer(Integer*);
    virtual ~Integer();

    // ------------------------------------------------------------

    Integer* setLista(Integer*);
    LinkedList<Array<int>*>* getLista();
    Integer* setCadena(string);
    string getCadena();

    // ------------------------------------------------------------

    Integer* sumar(Integer*);
    Integer* restar(Integer*);
    Integer* multiplicar(Integer*);
    Integer* dividir(Integer*);

    // ------------------------------------------------------------

    Integer* funcionFactorial();
    Integer* Fibonacci();
    Integer* combinaciones();

    // ------------------------------------------------------------

    Integer* operator + (Integer*);
    Integer* operator - (Integer*);
    Integer* operator * (Integer*);
    Integer* operator / (Integer*);

    // ------------------------------------------------------------

    Integer* operator = (Integer*);
    Integer* operator += (Integer*);
    Integer* operator -= (Integer*);
    Integer* operator *= (Integer*);
    Integer* operator /= (Integer*);

    // ------------------------------------------------------------

    bool operator == (Integer*);
    bool operator != (Integer*);
    bool operator < (Integer*);
    bool operator <= (Integer*);
    bool operator > (Integer*);
    bool operator >= (Integer*);

    // ------------------------------------------------------------

    friend ostream& operator << (ostream& out, Integer* obj) {
        out << obj->toString();
        return out;
    }

    // ------------------------------------------------------------

    Integer* parse(string);
    string toString();

    // ------------------------------------------------------------

    int sumatoriaElementosArray(Array<int>*);
    Array<int>* sumarArrays(Array<int>*, Array<int>*);

    int getMenorCantidadCeldas(Array<int>*, Array<int>*);
    Array<int>* getDigitosArray(int);

    //LinkedList<Array<int>*>* getV();

private:
    LinkedList<Array<int>*>* v;
    string cadena;
};

#endif

