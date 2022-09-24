#ifndef LINKEDLIST_H
#define LINKEDLIST_H
#include<exception>
#include<cassert>
#include<sstream>
#include"Link.h"
using namespace std;

template<class T>

class LinkedList : public Collection {
public:
    
    LinkedList() {
        this.k = 0;
        this.first = NULL;
    }
    
    LinkedList(const LinkedList& orig);
    virtual ~LinkedList();
    
    int size() {
        return k;
    }
    
    T get(int i) {
        T r = NULL;
        if ((0 <= i) && (i < size())) {
            Link current = first;
            int p = 0;
            while ((current != NULL) && (p < i)) {
                current = current.next;
                p++;
            }
            assert (current != NULL);
            r = (T) current.info;
        } else {
            throw new exception();
        }
        return r;
    }
    
    Collection set(int i, T v) { 
        if ((0 <= i) && (i < size())) {
            Link current = first;
            int p = 0;
            while ((current != NULL) && (p < i)) {
                current = current.next;
                p++;
            }
            assert (current != null);
            current.info = v;
            return this;
        } else {
            throw new exception();
        }
    }
    
    Collection swap(int i, int j) {
        if (((0 <= i) && (i < size())) && ((0 <= j) && (j < size()))) {
            T o1 = get(i);
            T o2 = get(j);
            set(i, o2);
            set(j, o1);
            return this;
        } else {
            throw new exception();
        }
    }
    
    Collection add(T v) { 
        return add(0, v);
    }
    
    Collection add(int i, T v) {
        if (v != NULL) {
            int m = ((0 <= i) && (i < size())) ? i : size();
            if (m == 0) {
                first = new Link(first, v);
            } else {
                Link<T> current = first;
                int p = 0;
                while ((current != NULL) && (p < (m - 1))) {
                    current = current.next;
                    p++;
                }
                assert (current != NULL);
                current.next = new Link(current.next, v);
            }
            k++;
        } else {
            throw new exception();
        }
        return this;
    }
    
    T remove() {
        return remove(0);
    }
    
    T remove(int i) {
        T r = NULL;
        if (!isEmpty()) {
            if (i == 0) {
                r = first.info;
                first = first.next;
                k--;
            } else if ((0 <= i) && (i < size())) {
                Link current = first;
                int p = 0;
                while ((current.next != NULL) && (p < (i - 1))) {
                    current = current.next;
                    p++;
                }
                assert (current != NULL);
                current.next = current.next.next;
                k--;
            }
        }
        return r;
    }
    
    string toString() { 
//        StringBuilder r = new StringBuilder("{");
//        Link current = first;
//        while (current != null) {
//            r.append(current.info);
//            current = current.next;
//            if (current != null) {
//                r.append(", ");
//            }
//        }
//        r.append("}");
        return "";
    }
    
private:
    int k;
    Link first;
};

#endif 

