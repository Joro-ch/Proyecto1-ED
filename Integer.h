#ifndef INTEGER_H
#define INTEGER_H
#include"Stack.h"
#include"Array.h"

#define ZERO 0;
#define ONE 1;

class Integer {
public:
    
    // ------------------------------------------------------------
    
    Integer();
    Integer(Integer*);
    virtual ~Integer();
    
    // ------------------------------------------------------------
    
    Integer* setLista(Integer*);
    Stack<Array<int>*>* getLista();
    
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
    
    Integer* operator << (Integer*); 
    
    // ------------------------------------------------------------
    
    void parse();
    string toString();
    
    // ------------------------------------------------------------
    
private:
    Stack<Array<int>*>* v;
};

#endif

