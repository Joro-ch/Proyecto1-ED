#ifndef LINK_H
#define LINK_H
#include <iostream>
using namespace std;

template<class T>

class Link {
public:
    Link(Link next, T info) {
        this.next = next;
        this.info = info;
    }

    Link (T info) {
        this(NULL, info);
    }
    
    virtual ~Link();
private:
    Link next;
    T info;
};

#endif 

