#include "Integer.h"

Integer::Integer() {
    this->v = new LinkedList<Array<int>*>();
}
Integer::Integer(string numero) {
    Integer();
    parse(numero);
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

LinkedList<Array<int>*>* Integer::getLista(){
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
        this->v = i->getLista();
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
    
Integer* Integer::parse(string numero) {
    Array<int>* auxA = new Array<int>();
    int digito = 0;
    
    for(int i = numero.size(); i > 0; i--) {
        if(!auxA->isFull()) {
            digito = Util::posiblesNumeros(numero[i]);
            auxA->add(&digito);
        }
        else {
            v->add(new Array<int>*(auxA));
            auxA->clear();
        }
    }
    
    return this;
}
string Integer::toString() {
    stringstream s;
    
    Array<int>* auxA = new Array<int>();
    
    if (v) {
        for(int i = 0; i < v->size(); i++) {
            auxA = *(v->get(i));
            for(int x = auxA->size(); x > 0; x++) {
                s << auxA->get(x);
            } 
        } 
    } 
    
    return s.str();
}
