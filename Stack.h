#ifndef STACK_H
#define STACK_H
#include"LinkedList.h"

template<class T>

class Stack {
public:
    
    // ------------------------------------------------------------
    
    Stack() {
        this->v = new LinkedList<T>();
    }
    
    Stack(Stack<T>* s) {
        *this = s;
    }
    
    virtual ~Stack()
    {
        if(v) {
            delete v;
        }
    }
    
    // ------------------------------------------------------------
    
    Stack* setLista(Collection<T>* v) {
        this->v = v;
        return this;
    }
    
    Collection<T>* getLista() {
        return v;
    }
    
    // ------------------------------------------------------------

    bool isEmpty() {
        return v->isEmpty();
    }

    int size() {
        return v->size();
    }

    T* top() {
        return v->get(0);
    }

    void push(T* e) {
        if (e != NULL) {
            v->add(e);
        } else {
            throw new exception();
        }
    }

    T* pop() {
        return v->remove();
    }
    
    // ------------------------------------------------------------

    Stack<T>* operator = (Stack<T>* s) {
        if(s) {
            this->v->clear();
            this->v = s->getLista();
        }
        return this;
    }
    
    bool operator == (Stack<T>* s) {
        if(s) {
            return v == s->getLista();
        }
        else {
            throw new exception();
        }
    }
    
    bool operator != (Stack<T>* s) {
        return !(this == s);
    }
    
private:
    Collection<T>* v;
};

#endif 

