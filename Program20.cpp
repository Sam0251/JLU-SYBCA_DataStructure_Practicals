//Write a program to implement a stack of 10 elements using linked list
#include <iostream>
using namespace std;
struct Node {
    int data;
    Node* next;
};
class Stack {
private:
    Node* top;
    int size;
    const int MAX_SIZE = 10;

public:
    Stack() {
        top = nullptr;
        size = 0;
    }
    void push(int value) {
        if (size >= MAX_SIZE) {
            cout << "Stack Overflow! Cannot push " << value << endl;
            return;
        }
        Node* newNode = new Node();
        newNode->data = value;
        newNode->next = top;
        top = newNode;
        size++;

        cout << value << " pushed to stack." << endl;
    }
    void pop() {
        if (isEmpty()) {
            cout << "Stack Underflow! Cannot pop." << endl;
            return;
        }
        Node* temp = top;
        cout << temp->data << " popped from stack." << endl;
        top = top->next;
        delete temp;
        size--;
    }
    int peek() {
        if (isEmpty()) {
            cout << "Stack is empty!" << endl;
            return -1;
        }
        return top->data;
    }
    bool isEmpty() {
        return top == nullptr;
    }
    void display() {
        if (isEmpty()) {
            cout << "Stack is empty!" << endl;
            return;
        }
        Node* temp = top;
        cout << "Stack elements: ";
        while (temp != nullptr) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};
int main() {
    Stack s;
    for (int i = 1; i <= 11; ++i) {
        s.push(i * 10);
    }
    s.display();
    s.pop();
    s.pop();
    s.display();
    cout << "Top element is: " << s.peek() << endl;
    return 0;
}


