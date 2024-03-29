#include <iostream>

using namespace std;

template<typename E>
class DNode;

template<typename E>
class DLinkedList;

template<typename E>
class DNode { // doubly linked list node
    private:
    E elem; // node element value
    DNode<E>* prev; // previous node in list
    DNode<E>* next; // next node in list
    
    friend class DLinkedList<E>; // allow DLinkedList<E> access
};

template<typename E>
class DLinkedList{ // doubly linked list
public:
    DLinkedList<E>(); // constructor
    ~DLinkedList<E>(); // destructor
    bool empty() const; // is list empty?
    const E& front() const; // get front element
    const E& back() const; // get back element
    void addFront(const E& e); // add to front of list
    void addBack(const E& e); // add to back of list
    void removeFront(); // remove from front
    void removeBack(); // remove from back
private: // local type definitions
    DNode<E>* header; // list sentinels
    DNode<E>* trailer;
    protected: // local utilities
    void add(DNode<E>* v, const E& e); // insert new node before v
    void remove(DNode<E>* v); // remove node v
};

template<typename E>
DLinkedList<E>::DLinkedList() { // constructor
    header = new DNode<E>; // create sentinels
    trailer = new DNode<E>;
    header->next = trailer; // have them point to each other
    trailer->prev = header;
}

template<typename E>
DLinkedList<E>::~DLinkedList() { // destructor
    while (!empty()) removeFront(); // remove all but sentinels
    delete header; // remove the sentinels
    delete trailer;
}

template<typename E>
bool DLinkedList<E>::empty() const // is list empty?
    { return (header->next == trailer); }
template<typename E>
const E& DLinkedList<E>::front() const // get front element
    { return header->next->elem; }
template<typename E>
const E& DLinkedList<E>::back() const // get back element
    { return trailer->prev->elem; }

template<typename E>
void DLinkedList<E>::add(DNode<E>* v, const E& e) {        //v nin arkasına koy
    DNode<E>* u = new DNode<E>;
    u->elem = e; // create a new node for e
    u->next = v; // link u in between v
    u->prev = v->prev; // . . .and v->prev
    v->prev->next = u;
    v->prev = u; 
}

template<typename E>
void DLinkedList<E>::addFront(const E& e) // add to front of list
    { add(header->next, e); }
template<typename E>
void DLinkedList<E>::addBack(const E& e) // add to back of list
    { add(trailer, e); }

template<typename E>
void DLinkedList<E>::remove(DNode<E>* v) { // remove node v
    DNode<E>* u = v->prev; // predecessor
    DNode<E>* w = v->next; // successor
    u->next = w; // unlink v from list
    w->prev = u;
    delete v;
}

template<typename E>
void DLinkedList<E>::removeFront() // remove from font
    { remove(header->next); }

template<typename E>
void DLinkedList<E>::removeBack() // remove from back
    { remove(trailer->prev); }


int main(void) {
    DLinkedList<string> obj1;
    obj1.addFront("bir");
    obj1.addFront("iki");
    obj1.addFront("üç");

    cout << obj1.front() << endl;
}