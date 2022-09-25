#include "Integer.h"

Integer::Integer(){}
Integer::Integer(const Integer& orig){}
Integer::~Integer(){}
    
// ------------------------------------------------------------
    
Integer* Integer::suma(){}
Integer* Integer::resta(){}
Integer* Integer::multiplicacion(){}
Integer* Integer::division(){}
    
// ------------------------------------------------------------
    
void Integer::funcionFactorial(){} 
void Integer::Fibonacci(){}
void Integer::combinaciones(){}
    
// ------------------------------------------------------------
    
Integer& Integer::operator + (const Integer&){}
Integer& Integer::operator - (const Integer&){}  
Integer& Integer::operator * (const Integer&){}  
Integer& Integer::operator / (const Integer&){}
    
Integer& Integer::operator = (const Integer&){}
Integer& Integer::operator += (const Integer&){}  
Integer& Integer::operator -= (const Integer&){}  
Integer& Integer::operator *= (const Integer&){} 
Integer& Integer::operator /= (const Integer&){}
    
Integer& Integer::operator == (const Integer&){}
Integer& Integer::operator != (const Integer&){}  
Integer& Integer::operator < (const Integer&){} 
Integer& Integer::operator <= (const Integer&){} 
Integer& Integer::operator > (const Integer&){}
Integer& Integer::operator >= (const Integer&){}
    
Integer& Integer::operator << (const Integer&){}
    
// ------------------------------------------------------------
    
void Integer::parse(){}
string Integer::toString(){}
