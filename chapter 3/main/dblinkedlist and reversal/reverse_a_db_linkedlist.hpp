#include "dbtest.cpp"

using namespace std;

void listReverse(DLinkedList& L) {                      //reverse a list
    DLinkedList T;                                      //temporary list

    while(!L.empty()) {
        string s = L.getFront(); L.removeFront();
        T.addFront(s);
    }
    while (!T.empty()) {
        string s = T.getFront(); T.removeFront();
        L.addBack(s);
    }
}


