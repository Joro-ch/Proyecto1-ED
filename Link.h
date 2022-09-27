#ifndef LINK_H
#define LINK_H
#include <iostream>
using namespace std;

template<class T>

class Link {
public:
    
    // ------------------------------------------------------------
    
    Link(Link<T>* next, T* info) {
        this->next = next;
        this->info = info;
    }
    
    Link (T* info) {
        this(NULL, info);
    }
    
    Link(Link<T>* o) {
        this = o;
    }
    
    // ------------------------------------------------------------
    
    virtual ~Link()
    {
        if(next) {
            delete next;
        }
        if(info) {
            delete info;
        }
    }
    
    // ------------------------------------------------------------
    
    void setNext(Link<T>* next)
    {
        this->next = next;
    }
    
    void setInfo(T* info)
    {
        this->info = info;
    }
    
    // ------------------------------------------------------------
    
    Link<T>* getNext()
    {
        return next;
    }
    
    T* getInfo()
    {
        return info;
    }
    
    // ------------------------------------------------------------
    
    Link<T>* operator = (Link<T>* l){
        this->setNext(l->getNext());
        this->setInfo(l->getInfo());
        return this;
    }
    
    bool operator == (Link<T>* i) {
        return false;
    }
    
    bool operator != (Link<T>* i) {
        return !(this == i);
    }  
    
private:
    Link<T>* next;
    T* info;
};

#endif 

