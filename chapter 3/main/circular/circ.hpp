#include <iostream>

using namespace std;

typedef string Elem;
class CNode {
    private:                                    //node of a circularly linked list
        Elem elem;
        CNode* next;

        friend class CircleList;

};

class CircleList {
    public: 
        CircleList();
        ~CircleList();
        bool empty() const;
        const Elem& front() const;              //element at cursor
        const Elem& back() const;               //element following cursor
        void advance();                         //advance cursor
        void add(const Elem& e);                //add after cursor
        void remove();                          //remove node after cursor
        int nodeCount();
    private:
        CNode* cursor;                              //the cursora back ve front verilecek
};

CircleList::CircleList() : cursor(NULL) {}          // constructor
CircleList::~CircleList() {                         // destructor
    while(!empty()) remove(); 
}

int CircleList::nodeCount() {
    if(cursor == NULL)
        return 0;

    CNode* current;
    current = cursor;

    int i = 1;

    while(current->next != cursor) {
        current = current->next;
        i++;
    } 

    return i;

}

bool CircleList::empty() const {                //is list empty?
    return cursor == NULL;
}

const Elem& CircleList::back() const {
    return cursor->elem;
}

const Elem& CircleList::front() const {
    return cursor->next->elem;
}

void CircleList::advance() {
    cursor = cursor->next;
}
//simple member functions

void CircleList::add(const Elem& e) {
    CNode* v = new CNode;
    v->elem = e;
    if(cursor == NULL) {
        v->next = v;
        cursor = v; 
    }
    else {
        v->next = cursor->next;
        cursor->next = v;
    }
}

void CircleList::remove() {
    CNode* old = cursor->next;
    if(old == cursor)
        cursor = NULL;
    else
        cursor->next = old->next;
    delete old;
}
