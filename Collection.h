#ifndef COLLECTION_H
#define COLLECTION_H
#include <iostream>
using namespace std;

template<class T>

class Collection {
public:
    
    // ------------------------------------------------------------

    virtual bool isEmpty() {
        return size() == 0;
    }
    
    // ------------------------------------------------------------
    
    virtual int size() = 0;
    virtual T* get(int i) = 0;

    // ------------------------------------------------------------
    
    virtual Collection<T>* set(int i, T* v) = 0;
    virtual Collection<T>* swap(int i, int j) = 0;
    virtual Collection<T>* add(T* v)  = 0;
    virtual Collection<T>* add(int i, T* v)  = 0;
    
    // ------------------------------------------------------------
    
    virtual Collection<T>* remove() = 0;
    virtual Collection<T>* remove(int i) = 0;
    
    // ------------------------------------------------------------
    
    virtual Collection<T>* clear() {
        while(!isEmpty())
        {
            remove();
        }
        return this;
    }
    
};

#endif 

