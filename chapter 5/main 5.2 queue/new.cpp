#include <iostream>
#include <string>

using namespace std;

class arrayQueue{
    private:
        int cap;
        int front;
        int rear;
        int elem_count;
        
    public:
        int* arrQueue;
        arrayQueue(int);
        bool is_empty();
        int get_cap();
        void push(int);
        void pop();
        int getFront();
        int getrear();
};

arrayQueue::arrayQueue(int cap) {
    this->cap = cap;
    front = 0;
    rear = -1;
    elem_count = 0;
    arrQueue = new int[cap];
    
}

bool arrayQueue::is_empty() {
    elem_count == 0 ? 1 : 0;
}

int arrayQueue::get_cap() {
    return this->cap;
}

void arrayQueue::push(int a) {
    if(elem_count == 15) {
        cout << "QUEUE FULL" << endl;
        return;
    }

    if(rear == cap - 1) {
        rear = -1;
    }

    arrQueue[++rear] = a;
    elem_count++;
    
}

void arrayQueue::pop() {
    if(front == cap - 1) {
        front = -1;
    }

    ++front;
    elem_count--;
}

int arrayQueue::getFront() {
    return arrQueue[front];
}

int arrayQueue::getrear() {
    return arrQueue[rear];
}

int main(void) {

    arrayQueue* myq = new arrayQueue(15);
    for(int i = 0; i < 15; i++)
        myq->push(i);

    myq->pop();
    myq->pop();
    myq->pop();
    myq->pop();

    for(int i = 0; i < 5; i++) 
        myq->push(i);
    cout << myq->getFront() << endl;
    
}