#ifndef LINKEDLIST_H
#define LINKEDLIST_H
#include<exception>
#include<cassert>
#include<sstream>
#include"Link.h"
#include"Collection.h"
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
    
    virtual ~LinkedList() {
        if (first) {
            this->clear();
        }
    }
    
    // ------------------------------------------------------------
    
    LinkedList* setFirst(Link<T>* first){
        this->first = first;
        return this;
    } 
    
    LinkedList* setK(int k){
        this->k = k;
        return this;
    }
    
    // ------------------------------------------------------------
    
    Link<T>* getFirst(){
        return first;
    }
    
    int getK(){
        return k;
    }
    
    // ------------------------------------------------------------
    
    int size() {
        return k;
    }
    
    T* get(int i) {
        T* r = NULL;
        if ((0 <= i) && (i < size())) {
            Link<T>* current = first;
            int p = 0;
            while ((current != NULL) && (p < i)) {
                current = current->getNext();
                p++;
            }
            assert (current != NULL);
            r = current->getInfo();
        } else {
            throw new exception();
        }
        return r;
    }
    
    // ------------------------------------------------------------
    
    Collection<T>* set(int i, T* v) { 
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
        } else {
            throw new exception();
        }
    }
    
    Collection<T>* swap(int i, int j) {
        if (((0 <= i) && (i < size())) && ((0 <= j) && (j < size()))) {
            T* o1 = get(i);
            T* o2 = get(j);
            set(i, o2);
            set(j, o1);
            return this;
        } else {
            throw new exception();
        }
    }
    
    Collection<T>* add(T* v) { 
        return add(0, v);
    }
    
    Collection<T>* add(int i, T* v) {
        if (v != NULL) {
            int m = ((0 <= i) && (i < size())) ? i : size();
            if (m == 0) {
                first = new Link<T>(first, v);
            } else {
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
        } else {
            throw new exception();
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
        Link<T>* current = first;
        while (current != NULL) {
            s << current->getInfo();
            current = current->getNext();
            if (current != NULL) {
                s << ", ";
            }
        }
        return s.str();
    }
    
    // ------------------------------------------------------------
    
    LinkedList<T>* operator = (LinkedList<T>* l) {
        if (l) {
            this->clear();
            this->setFirst(l->getFirst());
            this->setK(l->getK());
        }
        return this;
    }
    
    bool operator == (LinkedList<T>* l) {
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
    
    bool operator != (LinkedList<T>* l) {
        return !(this == l);
    }
    
private:
    int k;
    Link<T>* first;
};

#endif 

