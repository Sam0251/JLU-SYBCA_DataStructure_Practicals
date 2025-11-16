//Write a program to search for a node in a BST.
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

Node* insertBST(Node* root, int value) {
    if (root == nullptr) {
        root = createNode(value);
        return root;
    }
    if (value < root->data)
        root->left = insertBST(root->left, value);
    else
        root->right = insertBST(root->right, value);

    return root;
}

bool searchBST(Node* root, int key) {
    if (root == nullptr)
        return false;

    if (root->data == key)
        return true;

    if (key < root->data)
        return searchBST(root->left, key);
    else
        return searchBST(root->right, key);
}

int main() {
    Node* root = nullptr;

    root = insertBST(root, 50);
    insertBST(root, 30);
    insertBST(root, 70);
    insertBST(root, 20);
    insertBST(root, 40);
    insertBST(root, 60);
    insertBST(root, 80);

    int key;
    cout << "Enter value to search: ";
    cin >> key;

    if (searchBST(root, key))
        cout << "Node found in BST." << endl;
    else
        cout << "Node NOT found in BST." << endl;

    return 0;
}

