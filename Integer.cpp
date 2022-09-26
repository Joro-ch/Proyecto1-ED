#include "Integer.h"

Integer::Integer()
{
    this->v = new Stack<Array<int>*>();
}
Integer::Integer(Integer* o)
{
    this->v = new Stack<Array<int>*>(o->getLista());
    
}
Integer::~Integer()
{
}

// ------------------------------------------------------------

Integer* Integer::setLista(Integer* v){
    if(v != NULL)
    {
        delete v;
        
        // Usar constructor copia de las otras clases
    }
    
    return this;
}

Stack<Array<int>*>* Integer::getLista(){
    return v;
}
    
// ------------------------------------------------------------
    
Integer* Integer::sumar(Integer* sumando) {
    
    
    return NULL;
}
Integer* Integer::restar(Integer* sustraendo) {
    
    
    return NULL;
}
Integer* Integer::multiplicar(Integer* multiplicador) {
    
    
    return NULL;
}
Integer* Integer::dividir(Integer* divisor) {
    
    
    return NULL;
}
    
// ------------------------------------------------------------
    
Integer* Integer::funcionFactorial() {

} 
Integer* Integer::Fibonacci(){}
Integer* Integer::combinaciones(){}
    
// ------------------------------------------------------------
    
Integer* Integer::operator + (Integer* sumando){
    return sumar(sumando);
}

Integer* Integer::operator - (Integer* sustraendo){
    return restar(sustraendo);
}  
Integer* Integer::operator * (Integer* multiplicador){
    return multiplicar(multiplicador);
}  
Integer* Integer::operator / (Integer* divisor){
    return dividir(divisor);
}
    
Integer* Integer::operator = (Integer*){
    //this->v = v;
    return this;
}
Integer* Integer::operator += (Integer*){
    return this;
}  
Integer* Integer::operator -= (Integer*){
    return this;
}  
Integer* Integer::operator *= (Integer*){
    return this;
} 
Integer* Integer::operator /= (Integer*){
    return this;
}
    
Integer* Integer::operator == (Integer*){
    return this;
}
Integer* Integer::operator != (Integer*){
    return this;
}  
Integer* Integer::operator < (Integer*){
    return this;
} 
Integer* Integer::operator <= (Integer*){
    return this;
} 
Integer* Integer::operator > (Integer*){
    return this;
}
Integer* Integer::operator >= (Integer*){
    return this;
}
    
Integer* Integer::operator << (Integer*){
    return this;
}
    
// ------------------------------------------------------------
    
void Integer::parse(){}
string Integer::toString(){
    return "";
}
