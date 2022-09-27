#ifndef ARRAY_H
#define ARRAY_H
#include"Collection.h"

template<class T>

class Array : public Collection<T> {
public:
    Array(int n){
        t = n;
        e = new T*[n];
        k = 0;
    }
    
    Array() {
        t = DEFAULT_CAPACITY;
        e = new T*[t];
        k = 0;
    }
    
    Array(Array<T>* a) {
        this = a;
    }
    
    virtual ~Array(){
        if(e) {
            this->clear();
        }
    }
    
    // ------------------------------------------------------------
    
    bool isFull() {
        return k == t;
    }
    
    int size(){
        return k;
    }
    
    int capacity() { 
        return t;
    }
    
    T* get(int i) {
        if ((0 <= i) && (i < size())) {
            return e[i];
        } else {
            throw new exception();
        }
    }

    // ------------------------------------------------------------
    
    Collection<T>* set(int i, T* v) {
        if ((0 <= i) && (i < size())) {
            e[i] = v;
        } else {
            throw new exception();
        }
        return this;
    }
    
    Collection<T>* swap(int i, int j) {
        bool f = (0 <= i) && (i < size()) && (0 <= j) && (j < size());
        if (f) {
            T* temp = e[i];
            e[i] = e[j];
            e[j] = temp;
            return this;
        } else {
            throw new exception();
        }
    }
    
    Collection<T>* add(T* v) {
        if ((v != NULL) && (size() < capacity())) {
            e[k++] = v;
        } else {
            throw new exception();
        }
        return this;
    }
    
    Collection<T>* add(int i, T* v) {
        if ((v != NULL) && (size() < capacity())) {
            int m = ((0 <= i) && (i < size())) ? i : size();
            k++;
            for (int j = k - 1; m < j; j--) {
                e[j] = e[j - 1];
            }
            e[m] = v;
        } else {
            throw new exception();
        }
        return this;
    }
    
    // ------------------------------------------------------------
    
    Collection<T>* remove() {
        return remove(size() - 1);
    }
    
    Collection<T>* remove(int i) {
        if ((0 <= i) && (i < size())) {
            for (int j = i; j < (k - 1); j++) {
                e[j] = e[j + 1];
            }
            k--;
        }
        return this;
    }
    
    // ------------------------------------------------------------
    
    string toString() { 
        stringstream s;
        for (int i = 0; i < size(); i++) {
            if (i > 0) {
                s << ", ";
            }
            s << get(i)->toString(); 
        }
        return s.str();
    }
    
    // ------------------------------------------------------------
    
    Array<T>* operator = (Array<T>* a) {
        if(a) {
            this->clear();
            this->t = a->capacity();
            this->e = new T*[t];
        
            for(int i = 0; i < a->size(); i++)
            {
                this->e[i] = a->get(i); 
            }
        }
        return this;
    }
    
    bool operator == (Array<T>* a) {
        if(a) {
            for(int i = 0; i < size(); i++) {
                if (this->e[i] != a[i]) {
                    return false;
                }
            }
            return true;
        }
        else {
            throw new exception();
        }
    }
    
    bool operator != (Array<T>* a) {
        return !(this == a);
    }
    
private:
    int DEFAULT_CAPACITY = 5;
    int k;
    int t;
    T** e;
};

#endif 

