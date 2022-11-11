#include <iostream>

using namespace std;

template <typename E>
class ArrayStack { enum { DEF_CAPACITY = 100 }; // default stack capacity
    public:
        ArrayStack(int cap = DEF_CAPACITY); // constructor from capacity
        int size() const; // number of items in the stack
        bool empty() const; // is the stack empty?
        const E& top() const; // get the top element
        void push(const E& e); // push element onto stack
        void pop(); // pop the stack
        // . . .housekeeping functions omitted
    private: // member data
        E* Stac; // array of stack elements
        int capacity; // stack capacity
        int t; // index of the top of the stack
};

template <typename E> 
ArrayStack<E>::ArrayStack(int cap) : Stac(new E[cap]), capacity(cap), t(-1) { } // constructor from capacity

template <typename E> 
int ArrayStack<E>::size() const { return (t + 1); } // number of items in the stack

template <typename E> bool ArrayStack<E>::empty() const { return (t < 0); } // is the stack empty?

template <typename E> // return top of stack
    const E& ArrayStack<E>::top() const { if  (empty()) { cout << "Top of empty stack" << endl; return EXIT_FAILURE; }
    return Stac[t];
}

template <typename E> // push element onto the stack
    void ArrayStack<E>::push(const E& e) { if (size() == capacity) { cout << "Push to full stack" << endl; return;}
    Stac[++t] = e;
}

template <typename E> // pop the stack
    void ArrayStack<E>::pop() { if (empty()) { cout << "Pop from empty stack" << endl; return; }
    --t;
}
