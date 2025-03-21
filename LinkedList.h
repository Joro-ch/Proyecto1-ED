#ifndef LINKEDLIST_H
#define LINKEDLIST_H
#include<cassert>
#include"Collection.h"
#include"Link.h"
using namespace std;

template<class T>

class LinkedList : public Collection<T> {
public:
    
    // ------------------------------------------------------------
    
    LinkedList() {
        this->k = 0;
        this->first = NULL;
    }
    
    LinkedList(LinkedList<T>* l) {
        this = l;
    }
    
    // ------------------------------------------------------------
    
    virtual ~LinkedList() {
        if (first) {
            this->clear();
            delete first;
        }
    }
    
    // ------------------------------------------------------------
    
    LinkedList<T>* setFirst(Link<T>* first){
        this->first = first;
        return this;
    } 
    
    LinkedList<T>* setK(int k){
        this->k = k;
        return this;
    }
    
    // ------------------------------------------------------------
    
    Link<T>* getFirst() {
        return first;
    }
    
    int size() {
        return k;
    }
    
    T* get(int i) {
        T* r = NULL;
        try {
            if ((0 <= i) && (i < size())) {
                Link<T>* current = first;
                int p = 0;
                while ((current != NULL) && (p < i)) {
                    current = current->getNext();
                    p++;
                }
                assert (current != NULL);
                r = current->getInfo();
            }   
            else {
                throw new exception();
            }
        }
        catch (...) {
            cout << "Posicion invalida o contenedor lleno" << endl << endl;
        }
        return r;
    }
    
    // ------------------------------------------------------------
    
    Collection<T>* set(int i, T* v) { 
        try {
            if ((0 <= i) && (i < size())) {
                Link<T>* current = first;
                int p = 0;
                while ((current != NULL) && (p < i)) {
                    current = current->getNext();
                    p++;
                }
                assert (current != NULL);
                current->setInfo(v);
                return this;
            } 
            else {
                throw new exception();
            }
        }
        catch (...) {
            cout << "Posicion invalida o contenedor lleno" << endl << endl;
        }
    }
    
    Collection<T>* swap(int i, int j) {
        try {
            if (((0 <= i) && (i < size())) && ((0 <= j) && (j < size()))) {
                T* o1 = get(i);
                T* o2 = get(j);
                set(i, o2);
                set(j, o1);
                return this;
            } 
            else {
                throw new exception();
            }
        }
        catch (exception ex) {
            cout << "Posicion invalida o contenedor lleno" << endl << endl;
        }
    }
    
    Collection<T>* add(T* v) { 
        return add(0, v);
    }
    
    Collection<T>* add(int i, T* v) {
        try {
            if (v != NULL) {
                int m = ((0 <= i) && (i < size())) ? i : size();
                if (m == 0) {
                    first = new Link<T>(first, v);
                }   
                else {
                    Link<T>* current = first;
                    int p = 0;
                    while ((current != NULL) && (p < (m - 1))) {
                        current = current->getNext();
                        p++;
                    }
                    assert (current != NULL);
                    current->setNext(new Link<T>(current->getNext(), v));
                }
                k++;
            }    
            else {
                throw new exception();
            }
        }
        catch (...) {
            cout << "Posicion invalida, contenedor lleno o elemento invalido" << endl << endl;
        }
        return this;
    }
    
    // ------------------------------------------------------------
    
    Collection<T>* remove() {
        return remove(0);
    }
    
    Collection<T>* remove(int i) {
        Link<T>* aux = first;
        if (!this->isEmpty()) {
            if (i == 0) {
                aux = first;
                first = first->getNext();
                delete aux;
                k--;
            } else if ((0 <= i) && (i < size())) {
                int p = 0;
                while ((aux->getNext() != NULL) && (p < (i - 1))) {
                    aux = aux->getNext();
                    p++;
                }
                assert (aux != NULL);
                aux->setNext(aux->getNext()->getNext());
                delete aux;
                k--;
            }
        }
        return this;
    }
    
    // ------------------------------------------------------------
    
    string toString() { 
        stringstream s;
        try {
            Link<T>* aux = first;
            if(aux) {
                while (aux) {
                    s << *aux->getInfo();
                    aux = aux->getNext();
                }
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
    
    LinkedList<T>* operator = (LinkedList<T>* l) {
        try {
            if (l) {
                this->clear();
                this->setFirst(l->getFirst());
                this->setK(l->size());
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
    
    bool operator == (LinkedList<T>* l) {
        try {
            if(l && first && (k > 0)) {
                Link<T>* aux = first;
                for(int i = 0; i < k; i++) {
                    if(aux != l->get(i)) {
                     return false;
                    }
                }
                return true;
            }
            else {
                throw new exception();
            }
        }
        catch (...) {
            cout << "Elemento invalido!!" << endl << endl;
        }
    }
    
    bool operator != (LinkedList<T>* l) {
        try {
            if (l) {
                return !(this == l);
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
    int k;
    Link<T>* first;
};

#endif 

