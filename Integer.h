#ifndef INTEGER_H
#define INTEGER_H
#include<iostream>
#include<sstream>
#include"Stack.h"
using namespace std;

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
    Collection* v;
};

#endif

