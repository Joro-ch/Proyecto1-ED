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
    
    Stack(Stack<T>* o) {
        // this->v = new LinkedList<T>(o->getLista());
    }
    
    virtual ~Stack()
    {
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

private:
    Collection<T>* v;
};

#endif 

