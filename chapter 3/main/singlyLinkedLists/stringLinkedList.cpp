    #include <iostream>

using namespace std;

class StringNode { // a node in a list of strings
    public:
        string elem; // element value
        string getElem() const { return this->elem; };
    private:
    //string elem; // element value
    StringNode* next; // next item in the list
    friend class StringLinkedList; // provide StringLinkedList access
};                                  //LINKED LISTTE ELEMANLAR HEP FRONTDAN ALINIR!!!!!!!!!!!

class StringLinkedList { // a linked list of strings
    public:
        StringLinkedList(); // empty list constructor
        ~StringLinkedList(); // destructor
        bool empty() const; // is list empty?
        const string& front() const; // get front element
        void addFront(const string& e); // add to front of list
        void removeFront(); // remove front item list
        int size() const;
        void printAll() const;
        StringNode* second_last() const;
    private:
        StringNode* head; // pointer to the head of list
    
};

void StringLinkedList::printAll() const {
    StringNode* temp = head;
    while(temp != NULL) {
        cout << temp->elem << endl;
        temp = temp->next;
    }
}

StringNode* StringLinkedList::second_last() const {
    StringNode* current = head;
    while(current->next->next != NULL) {
        current = current->next;
    }
    return current;
}

int StringLinkedList::size() const {
    int i = 0;
    
    StringNode* current = head;
    while(current != NULL) {
        current = current->next;
        i++;
    }
    return i;
}

StringLinkedList::StringLinkedList() // constructor
    : head(NULL) { }

StringLinkedList::~StringLinkedList() // destructor
    { while (!empty()) removeFront(); }

bool StringLinkedList::empty() const // is list empty?
    { return head == NULL; }

const string& StringLinkedList::front() const // get front element
    { return head->elem; }

void StringLinkedList::addFront(const string& e) { // add to front of list
    StringNode* v = new StringNode; // create new node
    v->elem = e; // store data
    v->next = head; // head now follows v           eleman en öne ekleniyor ve yeni head oluyor
    head = v; // v is now the head
}

void StringLinkedList::removeFront() { // remove front item
    StringNode* old = head; // save current head
    head = old->next; // skip over old head
    delete old; // delete the old head
}

int main(void) {
    StringLinkedList obj1;
    obj1.addFront("memis");
    obj1.addFront("secondlast");
    obj1.addFront("furkan");
    obj1.addFront("merve");
    obj1.addFront("nazli");
    //cout << obj1.size() << endl;
    //StringNode* a = obj1.second_last();
    //cout << a->getElem() << endl;

    obj1.printAll();

}