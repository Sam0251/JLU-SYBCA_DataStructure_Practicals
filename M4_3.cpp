//Write a program to perform pre-order traversal of a binary tree.
#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
};

Node* createNode(int value) {
    Node* newNode = new Node();
    newNode->data = value;
    newNode->left = nullptr;
    newNode->right = nullptr;
    return newNode;
}

void preorder(Node* root) {
    if (root == nullptr) return;

    cout << root->data << " "; // Visit root
    preorder(root->left);      // Visit left subtree
    preorder(root->right);     // Visit right subtree
}

int main() {
    Node* root = createNode(10);
    root->left = createNode(20);
    root->right = createNode(30);
    root->left->left = createNode(40);
    root->left->right = createNode(50);

    cout << "Pre-order Traversal: ";
    preorder(root);

    return 0;
}

