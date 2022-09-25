#ifndef LINK_H
#define LINK_H
#include <iostream>
using namespace std;

template<class T>

class Link {
public:
    
    // ------------------------------------------------------------
    
    Link(Link<T>* next, T* info) {
        this.next = next;
        this.info = info;
    }

    Link (T* info) {
        this(NULL, info);
    }
    
    virtual ~Link()
    {
    }
    
    // ------------------------------------------------------------
    
private:
    Link<T>* next;
    T* info;
};

#endif 

