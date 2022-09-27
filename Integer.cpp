#include "Integer.h"

Integer::Integer() {
    this->v = new Stack<Array<int>*>();
}
Integer::Integer(Integer* i) {
    *this = i;
}
Integer::~Integer() {
    if(v) {
        delete v;
    }
}

// ------------------------------------------------------------

Integer* Integer::setLista(Integer* v){
    if(v) {
        *this = v;
    }
    return this;
}

Stack<Array<int>*>* Integer::getLista(){
    return v;
}
    
// ------------------------------------------------------------
    
Integer* Integer::sumar(Integer* sumando) {
    Integer* resultado = NULL;
    if(sumando) {
        
    }
    return resultado;
}
Integer* Integer::restar(Integer* sustraendo) {
    Integer* resultado = NULL;
    if(sustraendo) {
        
    }
    return resultado;
}
Integer* Integer::multiplicar(Integer* multiplicador) {
    Integer* resultado = NULL;
    if(multiplicador) {
        
    }
    return resultado;
}
Integer* Integer::dividir(Integer* divisor) {
    Integer* resultado = NULL;
    if(divisor) {
        
    }
    return resultado;
}
    
// ------------------------------------------------------------
    
Integer* Integer::funcionFactorial() {
    Integer* resultado = NULL;
    if(this) {
    
    }
    return resultado;
} 
Integer* Integer::Fibonacci() {
    Integer* resultado = NULL;
    if(this) {
    
    }
    return resultado;
}
Integer* Integer::combinaciones() {
    Integer* resultado = NULL;
    if(this) {
    
    }
    return resultado;
}
    
// ------------------------------------------------------------
    
Integer* Integer::operator + (Integer* sumando) {
    return sumar(sumando);
}

Integer* Integer::operator - (Integer* sustraendo) {
    return restar(sustraendo);
}  
Integer* Integer::operator * (Integer* multiplicador) {
    return multiplicar(multiplicador);
}  
Integer* Integer::operator / (Integer* divisor) {
    return dividir(divisor);
}

// ------------------------------------------------------------
    
Integer* Integer::operator = (Integer* i){
    if(i) {
        this->v = new Stack<Array<int>*>(i->getLista());
    }
    return this;
}
Integer* Integer::operator += (Integer* sumando) {
    return *this = this->sumar(sumando);
}  
Integer* Integer::operator -= (Integer* sustraendo) {
    return *this = this->restar(sustraendo);
}  
Integer* Integer::operator *= (Integer* multiplicador) {
    return *this = this->multiplicar(multiplicador);
} 
Integer* Integer::operator /= (Integer* divisor) {
    return *this = this->dividir(divisor);
}

// ------------------------------------------------------------
    
bool Integer::operator == (Integer* i) {
    if(i) {
        return this->v == i->getLista();
    }
    else {
        throw new exception();
    }
}
bool Integer::operator != (Integer* i) {
    return !(this == i);
}  
bool Integer::operator < (Integer* i) {
    return true;
} 
bool Integer::operator <= (Integer* i) {
    return true;
} 
bool Integer::operator > (Integer* i) {
    return true;
}
bool Integer::operator >= (Integer* i) {
    return true;
}

// ------------------------------------------------------------
    
Integer* Integer::operator << (Integer*) {
    return this;
}
    
// ------------------------------------------------------------
    
void Integer::parse() {

}
string Integer::toString() {
    return "";
}
