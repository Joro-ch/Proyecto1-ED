#ifndef LINK_H
#define LINK_H
#include<iostream>
#include<sstream>
#include<exception>
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
    
    string toString() {
        stringstream s;
        if(info) {
            s << info->toString();
        }
        return s.str();
    }
    
    // ------------------------------------------------------------
    
    Link<T>* operator = (Link<T>* l) {
        if(l) {
            this->setNext(l->getNext());
            this->setInfo(l->getInfo());
        }
        return this;
    }
    
    bool operator == (T* i) {
        if(i) {
            return this->getInfo() == i;
        }
        else {
            throw new exception();
        }
    }
    
    bool operator != (Link<T>* i) {
        return !(this == i);
    }  
    
private:
    Link<T>* next;
    T* info;
};

#endif 

