#include <string>

using namespace std;

template<typename E>
class SNode;

template<typename E>
class SLinkedList;

template <typename E>
class SNode { 
    private:                                     //singly linked list node
        E elem;                                     //linked list element value 
        SNode<E>* next;                             //next item in the list

        friend class SLinkedList<E>;                //provide SLinkedList access
};

template <typename E>
class SLinkedList {
    public:
        SLinkedList();                              //empty list constructur
        ~SLinkedList();                             //destructor
        bool empty() const;                         //is list empty
        const E& front() const;                     //return front element
        void addFront(const E& e);                  //add to the front of the list
        void removeFront();                         //remove front item list
    private:
        SNode<E>* head;                             //head of the list

};

template <typename E>
SLinkedList<E>::SLinkedList() : head(NULL) { }            //CONSTRUCTOR

template <typename E>
bool SLinkedList<E>::empty() const{                         //is list empty
    return head==NULL;
}

template <typename E>
const E& SLinkedList<E>::front() const {                //return front element
    return head->elem;
}

template <typename E>                                   //destructor
SLinkedList<E>::~SLinkedList() {
    while(!empty()) removeFront();
}

template <typename E>
void SLinkedList<E>::addFront(const E& e) {                 //add to the front of the list
    SNode<E>* v = new SNode<E>;                             //create new node
    v->elem = e;                                            //store data
    v->next = head;                                         //head now follows v
    head = v;                                               //v is now the head
}

template <typename E>
void SLinkedList<E>::removeFront() {                        //remove front item
    SNode<E>* old = head;                                   //save current head
    head = old->next;                                       //skip over old head
    delete old;                                             //delete the old head
}

