#ifndef INTEGER_H
#define INTEGER_H
#include"LinkedList.h"
#include"Array.h"
#include"Util.h"

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
    
    friend ostream& operator << (ostream& out,  Integer* obj) {
        out << obj->toString();
        return out;
    }
    
    // ------------------------------------------------------------
    
    Integer* parse(string);
    string toString();
    
    // ------------------------------------------------------------
    
private:
    LinkedList<Array<int>*>* v;
};

#endif

