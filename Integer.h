#ifndef INTEGER_H
#define INTEGER_H
#include"Stack.h"

#define ZERO 0;
#define ONE 1;

class Integer {
public:
    
    // ------------------------------------------------------------
    
    Integer();
    Integer(const Integer& orig);
    virtual ~Integer();
    
    // ------------------------------------------------------------
    
    Integer* suma();
    Integer* resta();
    Integer* multiplicacion();
    Integer* division();
    
    // ------------------------------------------------------------
    
    void funcionFactorial(); 
    void Fibonacci();
    void combinaciones();
    
    // ------------------------------------------------------------
    
    Integer& operator + (const Integer&);
    Integer& operator - (const Integer&);  
    Integer& operator * (const Integer&);  
    Integer& operator / (const Integer&);
    
    Integer& operator = (const Integer&);
    Integer& operator += (const Integer&);  
    Integer& operator -= (const Integer&);  
    Integer& operator *= (const Integer&); 
    Integer& operator /= (const Integer&);
    
    Integer& operator == (const Integer&);
    Integer& operator != (const Integer&);  
    Integer& operator < (const Integer&);  
    Integer& operator <= (const Integer&); 
    Integer& operator > (const Integer&);
    Integer& operator >= (const Integer&);
    
    Integer& operator << (const Integer&); 
    
    // ------------------------------------------------------------
    
    void parse();
    string toString();
    
    // ------------------------------------------------------------
    
private:
    Stack<int>* v;
};

#endif

