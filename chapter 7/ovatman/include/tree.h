
#include <iostream>
#include "node.h"

using namespace std;

class Tree {
    private:
        TreeNode* root;

    public:
        Tree();
        void printTree();    
};

void Tree::printTree() {
    cout << root->getData() 
        << "("
        << root->getLeft()->getData()
        << "("  
        << root->getLeft()->getLeft()->getData() 
        << "," 
        << root->getLeft()->getRight()->getData() 
        << ")" 
        << "," 
        << root->getRight()->getData()
        << "(" 
        << root->getRight()->getLeft()->getData() 
        << "," 
        << root->getRight()->getRight()->getData() 
        << ")"  
        << ")" 
        << endl;
}

Tree::Tree() {
    
    TreeNode* root = new TreeNode('A');

    TreeNode* Rl = new TreeNode('B');
    TreeNode* Rr = new TreeNode('C');
    TreeNode* Rll = new TreeNode('D');
    TreeNode* Rlr = new TreeNode('E');
    TreeNode* Rrl = new TreeNode('F');
    TreeNode* Rrr = new TreeNode('G');

    this->root->setLeft(Rl);
    this->root->setRight(Rr);

    this->root->getLeft()->setLeft(Rll);
    this->root->getLeft()->setRight(Rlr);
    this->root->getRight()->setLeft(Rrl); 
    this->root->getRight()->setRight(Rrr);
    
}