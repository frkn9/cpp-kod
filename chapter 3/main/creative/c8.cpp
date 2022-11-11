#include <iostream>

using namespace std;

typedef string Elem;                    //list element type

class DNode {                           //doubly linked list node
    Elem elem;  
    DNode* next;                        //next node in the list
    DNode* prev;                        //prev node in the list
    
    friend class DLinkedList;
};

class DLinkedList {
                                                        //header ve trailer boş, sadece başka şeylere pointliyor
    public:
        DLinkedList();
        ~DLinkedList();
        bool empty() const;
        const Elem& getFront() const;                   //get front element
        const Elem& getBack() const;
        void addFront(const Elem& e);                   //add to the front of the list
        void addBack(const Elem& e);
        void removeFront();                             //remove from front
        void removeBack();
    private:
        DNode* header;                                  //list sentinels
        DNode* trailer;
    protected:                                          //local utilities
        void add(DNode *v, const Elem& e);              //insert new node before v
        void remove(DNode *v);                          //remove node v 
};                                                      //istediği yere ekleyemesin diye protected

DLinkedList::DLinkedList() {
    header = new DNode;
    trailer = new DNode;
    header->next = trailer;
    trailer->prev = header;
}

DLinkedList::~DLinkedList() {                           //destructor
    while (!empty()) removeFront();                     //remove all but sentinels
    delete header;                                      //remove the sentinels
    delete trailer;
}

bool DLinkedList::empty() const {           //is list empty
    return (header->next == trailer);
}

const Elem& DLinkedList::getFront() const {                 //get front element
    return header->next->elem;
}

const Elem& DLinkedList::getBack() const {                  //get back element
    return trailer->prev->elem;
}
                                                            //insert new node before v
void DLinkedList::add(DNode *v, const Elem& e) {
    DNode* u = new DNode;
    u->elem = e;
    u->next = v;
    u->prev = v->prev;
    v->prev->next = v->prev = u;                                  //execution sağdan sola olduğu için böyle yapabiliyoruz
}  

void DLinkedList::addFront(const Elem& e) {
    add(header->next, e);
}

void DLinkedList::addBack(const Elem& e) {
    add(trailer->prev, e);
}

void DLinkedList::remove(DNode *v) {                                //remove node v
    DNode* u = v->prev;                                             //predecessor
    DNode* w = v->next;                                             //successor
    u->next = w;                                                    //unlink v from the list
    w->prev = u;
    delete v;
}

void DLinkedList::removeFront() {
    remove(header->next);
}

void DLinkedList::removeBack() {
    remove(trailer->prev);
}

