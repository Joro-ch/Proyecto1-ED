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
        this->next = o->getNext();
        this->info = o->getInfo();
    }
    
    virtual ~Link()
    {
    }
    
    void setNext(Link<T>* next)
    {
        this->next = next;
    }
    
    void setInfo(T* info)
    {
        this->info = info;
    }
    
    Link<T>* getNext()
    {
        return next;
    }
    
    T* getInfo()
    {
        return info;
    }
    
    // ------------------------------------------------------------
    
private:
    Link<T>* next;
    T* info;
};

#endif 

