#include <iostream>
#include <stdio.h>
#include <stack>

#include "../include/node.h"

using namespace std;

int main(int argc, char* argv[]) {
    

    root->setLeft(Rl);
    root->setRight(Rr);

    root->getLeft()->setLeft(Rll);
    root->getLeft()->setRight(Rlr);
    root->getRight()->setLeft(Rrl);
    root->getRight()->setRight(Rrr);

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