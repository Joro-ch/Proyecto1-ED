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
    
    Link<T>* setNext(Link<T>* next)
    {
        this->next = next;
        return this;
    }
    
    Link<T>* setInfo(T* info)
    {
        this->info = info;
        return this;
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
        try {
            if(info) {
                s << info;
            }
            else {
                throw new exception();
            }
        }
        catch (...) {
            cout << "Elemento invalido!!" << endl << endl;
        }
        return s.str();
    }
    
    // ------------------------------------------------------------
    
    friend ostream& operator << (ostream& out, Link<T>* obj) {
        try {
            if(obj) {
                out << obj->toString();
            }
            else {
                throw new exception();
            }
        }
        catch (...) {
            cout << "Elemento invalido!!" << endl << endl;
        }
        return out;
    }
    
    Link<T>* operator = (Link<T>* l) {
        try {
            if(l) {
                this->setNext(l->getNext());
                this->setInfo(l->getInfo());
            }
            else {
                throw new exception();
            }
        }
        catch (...) {
            cout << "Elemento invalido!!" << endl << endl;
        }
        return this;
    }
    
    bool operator == (T* i) {
        try {
            if(i) {
                return this->getInfo() == i;
            }
            else {
                throw new exception();
            }
        }
            catch (...) {
            cout << "Elemento invalido!!" << endl << endl;
        }
    }
    
    bool operator != (Link<T>* i) {
        try {
            if (i) {
                return !(this == i);
            }
            else {
                throw new exception();
            }
        }
        catch (...) {
            cout << "Elemento invalido!!" << endl << endl; 
        }
    }
    
private:
    Link<T>* next;
    T* info;
};

#endif 

