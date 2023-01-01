//--- 2022-2023 Fall Semester Data Structure Assignment 2 ---//
//--------------------------//
//---Name & Surname: Mehmet Furkan Çetiner
//---Student Number: 150200073
//--------------------------//

//-------------Do Not Add New Libraries-------------//
//-------------All Libraries Needed Were Given-------------//
#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;

//-------------Do Not Add New Class(es)-------------//

//-------------Token Class To Store Character Info-------------//
class Token{
    public:
        string symbol;
        int val = 0;
};

//-------------Node Class for Priority Queue and Tree-------------//
class Node{
    public:
        Token token;
        Node *next;
        Node *left;
        Node *right;
};

//-------------Priority Queue Class-------------//
class PriorityQueue{
    public:
        Node *head;
        PriorityQueue();
        void enque(Node*);
        Node* dequeue();
};

//-------------Tree Class-------------//
class Tree{
    public:
        Node *root;
        Tree();
        ~Tree();
        void deleteTree(Node*);
        Node* mergeNodes(Node*, Node*);
        void printTree(Node*, int);
};


PriorityQueue::PriorityQueue(){
    //TODO
    this->head = NULL;
};

//-------------Insert New Node To Priority Queue-------------//
void PriorityQueue::enque(Node* newnode){
    //TODO
    Node* curr = head;
    //if queue empty, newnode is head
    if(head == NULL) {                                      
        head = newnode;                               
        head->next = NULL;
    }
    //if newnode newnode's val lower than head's val, newnode is head
    else if(head->token.val > newnode->token.val) {         
        head = newnode;
        newnode->next = curr;
    }
    //iterate until current position's next pointer is either null or larger than newnode  
    else {
        while((curr->next != NULL) && (newnode->token.val >= curr->next->token.val)) {  
            curr = curr->next;                                                              
        }
        newnode->next = curr->next;             
        curr->next = newnode;                   
    }
    
    return;

};

//-------------Remove Node From Priority Queue-------------//
Node* PriorityQueue::dequeue(){
    //TODO    
    Node* curr = head;                           //
    head = head->next;
    curr->next = NULL;
    return curr; 
};