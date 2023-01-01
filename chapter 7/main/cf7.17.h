#include <iostream>

using namespace std

struct Node{
    Elem elt;
    Node* par;
    Node* right;
    Node* left;
    Node() : elt(), par(NULL), left(NULL), right(NULL) { }
};

class Position {
    private:
        Node* v;
    public:
        Position(Node* _v = NULL) : v(_v) { }
        Elem& operator*() {
            return v->elt;
        }
        Position left() const {
            return Position(v->left);
        }
        Position right() const {
            return Position(v->right);
        }
        Position parent() const {
            return Position(v->par);
        }
        bool isRoot() const {
            return v->par == NULL;
        }
        bool isExternal() const {
            return v->left == NULL && v->right == NULL;
        }
        friend class LinkedBinaryTree;
};
typedef std::list<Position> PositionList;


typedef int Elem;
class LinkedBinaryTree {
    protected:
        //insert Node decleration here
    public:
        //insert Position declaration here
    public:
        LinkedBinaryTree();                                                                 //constructor
        int size() const;                                                                   //number of nodes
        bool empty() const;                                                                 //is tree empty?
        Position root() const;                                                              //get the root
        PositionList positions() const;                                                     //list of nodes
        void addRoot();                                                                     //add root to empty tree
        void expandExternal(const Position& p);                                             //expand external node
        Position removeAboveExternal(const Position& p);                                    //remove p and parent
        //housekeeping functions omitted
    protected:                                                                              //local utilities
        void preorder(Node* v, PositionList& pl) const;                                     //preorder utility
    private:
        Node* _root;                                                                        //pointer to the root
        int n;                                                                              //number of nodes
}

LinkedBinaryTree::LinkedBinaryTree()                                        //constructor  
    : _root(NULL), n(0) { }
int LinkedBinaryTree::size() const                                          //number of nodes
    {return n; }
bool LinkedBinaryTree::empty() const                                        //is tree empty?
    {return size() == 0; }
LinkedBinaryTree::Position LinkedBinaryTree::root() const                   //get the root
    {return Position(_root); }
void LinkedBinaryTree::addRoot()                                            //add root to empty tree
    {_root = new Node; n = 1; }

void LinkedBinaryTree::expandExternal(const Position& p) {
    Node* v = p.v;
    v->left = new Node;
    v->left->par = v;
    v->right = new Node;
    v->right->par = v;
    n += 2;
}

LinkedBinaryTree::Position LinkedBinaryTree::removeAboveExternal(const Position& p) {
    Node* w = p.v; 
    Node* v = w->par;
    Node* sib = (w == v->left ? v->right : v->left);
    if(v == _root) {
        _root = sib;
        sib->par = NULL;
    }
    else {
        Node* gpar = v->par;
        if( v == gpar->left) gpar->left = sib;
        else gpar->right = sib;
        sib->par = gpar;
    }
    delete w; delete v;
    n -= 2;
    return Position(sib);
}

LinkedBinaryTree::PositionList LinkedBinaryTree::positions() const {
    PositionList pl;
    preorder(_root, pl);
    return PositionList(pl);
}

void LinkedBinaryTree::preorder(Node* v, PositionList& pl) const {
    pl.push_back(Position(v));
    if(v->left != NULL)
        preorder(v->left, pl);
    if (v->right != NULL)
        preorder(v->right, pl);
 }