#include <iostream>
#include "../include/node.h"

TreeNode::TreeNode(char data) {
    this->data = data;
    this->left = NULL;
    this->right = NULL;
}


void TreeNode::setData(char data) {
    this->data = data;
}

char TreeNode::getData() {
    return this->data;
}

void TreeNode::setRight(TreeNode* right) {
    this->right = right;
}

TreeNode* TreeNode::getRight() {
    return this->right;
}
void TreeNode::setLeft(TreeNode* left) {
    this->left = left;
}

TreeNode* TreeNode::getLeft() {
    return this->left;
}

