//Write a program to perform post-order traversal of a binary tree.
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

void postorder(Node* root) {
    if (root == nullptr) return;

    postorder(root->left);     // Visit left subtree
    postorder(root->right);    // Visit right subtree
    cout << root->data << " "; // Visit root
}

int main() {
    Node* root = createNode(10);
    root->left = createNode(20);
    root->right = createNode(30);
    root->left->left = createNode(40);
    root->left->right = createNode(50);

    cout << "Post-order Traversal: ";
    postorder(root);

    return 0;
}

