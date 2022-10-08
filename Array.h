#ifndef ARRAY_H
#define ARRAY_H
#include"Collection.h"
#include<sstream>
#include<exception>

template<class T>

class Array : public Collection<T> {
public:
    Array(int n){
        t = n;
        e = new T*[n];
        k = 0;
        
        for (int i = 0; i < t; i++) {
            e[i] = NULL;
        }
    }
    
    Array() {
        t = DEFAULT_CAPACITY;
        e = new T*[t];
        k = 0;
        
        for (int i = 0; i < t; i++) {
            e[i] = NULL;
        }
    }
    
    Array(Array<T>* a) {
        this = a;
    }
    
    virtual ~Array(){
        if(e) {
            this->clear();
            delete[] e;
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
        try {
            if ((0 <= i) && (i < size())) {
                return e[i];
            } 
            else {
                throw new exception();
            }
        }
        catch(exception ex) {
            cout << "Posicion Invalida o contenedor lleno!!";
        } 
    }
    
    static int getDefaultCapacity() {
        return DEFAULT_CAPACITY;
    }

    // ------------------------------------------------------------
    
    Collection<T>* set(int i, T* v) {
        try {
            if ((0 <= i) && (i < size())) {
                e[i] = v;
            } 
            else {
                throw new exception();
            }
        }
        catch(exception ex) {
            cout << "Elemento Invalido o contenedor lleno!!";
        }
        return this;
    }
    
    Collection<T>* swap(int i, int j) {
        try {
            bool f = (0 <= i) && (i < size()) && (0 <= j) && (j < size());
            if (f) {
                T* temp = e[i];
                e[i] = e[j];
                e[j] = temp;
            } 
            else {
                throw new exception();
            }
        }
        catch (exception ex) {
            cout << "Elemento Invalido";
        }
        return this;
    }
    
    Collection<T>* add(T* v) {
        try {
            if ((v != NULL) && (size() < capacity())) {
                e[k++] = v;
            } 
            else {
                throw new exception();
            }
        }
        catch(exception ex) {
            cout << "Elemento invalido o contenedor lleno!!";
        }
        return this;
    }
    
    Collection<T>* add(int i, T* v) {
        try {
            if ((v != NULL) && (size() < capacity())) {
                int m = ((0 <= i) && (i < size())) ? i : size();
                k++;
                for (int j = k - 1; m < j; j--) {
                    e[j] = e[j - 1];
                }
                e[m] = v;
            } 
            else {
                throw new exception();
            }
        }
        catch (exception ex) {
            cout << "Elemento invalido o contenedor lleno!!";
        }
        return this;
    }
    
    // ------------------------------------------------------------
    
    Collection<T>* remove() {
        return remove(size() - 1);
    }
    
    Collection<T>* remove(int i) {
        try {
            if ((0 <= i) && (i < size())) {
                for (int j = i; j < (k - 1); j++) {
                    e[j] = e[j + 1];
                }
                k--;
            }
            else {
                throw new exception();
            }
        }
        catch (exception ex) {
            cout << "Posicion Invalida o contenedor lleno!!";
        }
        return this;
    }
    
    // ------------------------------------------------------------
    
    string toString() {
        stringstream s;
        try {
            for (int i = 0; i < size(); i++) {
                if (*this->get(i)) {
                    s << *this->get(i);
                }
                else {
                    throw new exception();
                }
            }
        }
        catch (exception ex) {
            cout << "Elemento invalido!!";
        }
        return s.str();
    }
    
    // ------------------------------------------------------------
    
    friend ostream& operator << (ostream& out, Array<T>* obj) {
        try {
            if (obj) {
                out << obj->toString();
            }
            else {
                throw new exception;
            }
        }
        catch (exception ex) {
            cout << "Elemento invalido";
        }
        return out;
    }
    
    Array<T>* operator = (Array<T>* a) {
        try {
            if (a) {
                this->clear();
                this->t = a->capacity();
                this->e = new T*[t];
        
                for(int i = 0; i < a->size(); i++)
                {
                     this->e[i] = a->get(i); 
                }
            }
            else {
                throw new exception();
            }
        }
        catch(exception ex) {
            cout << "Elemento invalido!!";
        }
        return this;
    }
    
    bool operator == (Array<T>* a) {
        try {
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
        catch (exception ex) {
            cout << "Elemento invalido!!"; 
        }
    }
    
    bool operator != (Array<T>* a) {
        try {
            if (a) {
                return !(this == a);
            }
            else {
                throw new exception();
            }
        }
        catch (exception ex) {
            cout << "Elemento invalido!!"; 
        }
    }
    
private:
    const static int DEFAULT_CAPACITY = 5;
    int k;
    int t;
    T** e;
};

#endif 

