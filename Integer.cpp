#include "Integer.h"

Integer::Integer()
{
    
}
Integer::Integer(const Integer& orig){}
Integer::~Integer(){}
    
// ------------------------------------------------------------
    
Integer* Integer::suma(){
    return NULL;
}
Integer* Integer::resta(){
    return NULL;
}
Integer* Integer::multiplicacion(){
    return NULL;
}
Integer* Integer::division(){
    return NULL;
}
    
// ------------------------------------------------------------
    
void Integer::funcionFactorial(){} 
void Integer::Fibonacci(){}
void Integer::combinaciones(){}
    
// ------------------------------------------------------------
    
Integer& Integer::operator + (const Integer&){
    return *this;
}
Integer& Integer::operator - (const Integer&){
    return *this;
}  
Integer& Integer::operator * (const Integer&){
    return *this;
}  
Integer& Integer::operator / (const Integer&){
    return *this;
}
    
Integer& Integer::operator = (const Integer&){
    return *this;
}
Integer& Integer::operator += (const Integer&){
    return *this;
}  
Integer& Integer::operator -= (const Integer&){
    return *this;
}  
Integer& Integer::operator *= (const Integer&){
    return *this;
} 
Integer& Integer::operator /= (const Integer&){
    return *this;
}
    
Integer& Integer::operator == (const Integer&){
    return *this;
}
Integer& Integer::operator != (const Integer&){
    return *this;
}  
Integer& Integer::operator < (const Integer&){
    return *this;
} 
Integer& Integer::operator <= (const Integer&){
    return *this;
} 
Integer& Integer::operator > (const Integer&){
    return *this;
}
Integer& Integer::operator >= (const Integer&){
    return *this;
}
    
Integer& Integer::operator << (const Integer&){
    return *this;
}
    
// ------------------------------------------------------------
    
void Integer::parse(){}
string Integer::toString(){
    return "";
}
