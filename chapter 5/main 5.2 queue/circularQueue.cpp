#include "circ.hpp"


typedef string Elem; // queue element type
class LinkedQueue { // queue as doubly linked list
public:
    LinkedQueue(); // constructor
    int size() const; // number of items in the queue
    bool empty() const; // is the queue empty?
    const Elem& front() const; // the front element
    void enqueue(const Elem& e); // enqueue element at rear
    void dequeue(); // dequeue element at front
private: // member data
    CircleList C; // circular list of elements
    int n; // number of elements
};

LinkedQueue::LinkedQueue() // constructor
    : C(), n(0) { }
int LinkedQueue::size() const // number of items in the queue
    { return n; }
bool LinkedQueue::empty() const // is the queue empty?
    { return n == 0; } // get the front element
const Elem& LinkedQueue::front() const { 
    if (empty())
        cout << "front of empty queue";
    else 
        return C.front(); // list front is queue front
}

void LinkedQueue::enqueue(const Elem& e) { 
    C.add(e); // insert after cursor
    C.advance(); // . . .and advance
    n++;
} 
    // dequeue element at front
void LinkedQueue::dequeue() { if (empty())
    cout << "dequeue of empty queue" << endl;
    else
        C.remove(); // remove from list front
    n--;
}

int main(void) {

    LinkedQueue* v = new LinkedQueue;

    v->enqueue("birinci giren");
    v->enqueue("ikinci giren");
    v->enqueue("üçüncü giren");
    v->enqueue("dördüncü giren"); 
    v->dequeue();

    cout << v->front() << endl;
}