#include <iostream>
#include "genericLinkedList.hpp"

using namespace std;

typedef string Elem; // stack element type
class LinkedStack { // stack as a linked list
    public:
        LinkedStack(); // constructor
        int size() const; // number of items in the stack
        bool empty() const; // is the stack empty?
        const Elem& top() const; // the top element
        void push(const Elem& e); // push element onto stack
        void pop(); // pop the stack
    private: // member data
        SLinkedList<Elem> S; // linked list of elements
        int n; // number of elements
};

LinkedStack::LinkedStack(): S(), n(0) { } // constructor

int LinkedStack::size() const { return n; } // number of items in the stack

bool LinkedStack::empty() const { return n == 0; } // is the stack empty?

const Elem& LinkedStack::top() const { if (empty()) cout << "Top of empty stack";
    return S.front();
}

void LinkedStack::push(const Elem& e) { // push element onto stack
    ++n;
    S.addFront(e);
}

void LinkedStack::pop() { if (empty()) cout << "Pop from empty stack";
    --n;
    S.removeFront();
}

