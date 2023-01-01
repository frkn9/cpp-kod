
#include <iostream>

using namespace std;


class TreeNode{
    private:
        char data;
        TreeNode* left;
        TreeNode* right;
    public:
        TreeNode(char);
        void setData(char);
        char getData();
        void setLeft(TreeNode*);
        TreeNode* getLeft();
        void setRight(TreeNode*);
        TreeNode* getRight();
};

TreeNode::TreeNode(char data) {
    this->data = data;
    this->left = NULL;
    this->right = NULL;
};


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

