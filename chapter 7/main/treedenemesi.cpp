#include <iostream>

using namespace std;

class Node{
    public:
        Node(int value);
        Node* getLeft();
        Node* getRight();
        Node* getParent();
        int getVal();
        void setVal(int);
        int getDepth();
        bool isRoot();
    private:
        Node* left;
        Node* right;
        Node* parent;
        int val;

    friend class Tree;
    
};

bool Node::isRoot() {
    if(this->parent == NULL)
        return true;
    else 
        return false;
}

int Node::getDepth() {
    if(isRoot())
        return 0;
    else
        return 1 + this->parent->getDepth();
}

Node::Node(int value = 0) {
    this->val = value;
    this->right = NULL;
    this->left = NULL;
}

int Node::getVal() {
    return val;
}

void Node::setVal(int value) {
    this->val = value;
}

Node* Node::getLeft() {
    return this->left;
}

Node* Node::getRight() {
    return this->right;
}

Node* Node::getParent() {
    return this->parent;
}


class Tree {
    public:
        Tree();
        Node* getRoot();
        int getDepth();
        void addNode(Node* v, int val, string str);
        bool isEmpty();
    private:
        Node* root;
};

Tree::Tree() {
    this->root = NULL;
}

Node* Tree::getRoot() {
    return this->root;
}

int Tree::getDepth() {
    return getRoot()->getDepth();
}

bool Tree::isEmpty() {
    return (this->root==NULL);
}

void Tree::addNode(Node* v = NULL, int val = 0, string str = "") {
    if(v == NULL) {

        root = new Node(val);
        root->parent = v;
    }
    else if(str == "left") {
        Node* q = new Node(val);
        v->left = q;
    }
    else if (str == "right") {
        Node* q = new Node(val);
        v->right = q;
    }
    else 
        return;
}

int main(void) {
    Tree* myTree = new Tree;
    myTree->addNode(12);
}


