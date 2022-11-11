#include <iostream>


using namespace std;

typedef int Elem;

class IntNode {
    private:
        Elem num;
        IntNode* next;
    
        friend class IntLinkedList;
};

class IntLinkedList {
    public:
        IntLinkedList() : head(NULL) { };
        ~IntLinkedList();
        void addFront(Elem a);
        Elem getFront();
        void removeFront();
        bool isEmpty();
    private:
        IntNode* head;
};

IntLinkedList::~IntLinkedList() {
    while(isEmpty() == 0) {
        removeFront();   
    }
}

void IntLinkedList::addFront(Elem a) {
    IntNode* temp = new IntNode;
    temp->num = a;
    temp->next = head;
    head = temp;
}

Elem IntLinkedList::getFront() {
    return head->num;
}

void IntLinkedList::removeFront() {
    IntNode* old = head;
    head = head->next;
    delete old;
}

bool IntLinkedList::isEmpty() {
    return (head == NULL);
}


