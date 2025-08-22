#include <iostream>
using namespace std;

#define SIZE 5 

class Stack {
    int arr[SIZE];
    int top;

public:
    Stack() {
        top = -1;
    }
    bool isEmpty() {
        return top == -1;
    }
    bool isFull() {
        return top == SIZE - 1;
    }

    // Push operation
    void push(int value) {
        if (isFull()) {
            cout << "Stack is FULL! Cannot push " << value << endl;
        } else {
            arr[++top] = value;
            cout << value << " pushed to stack." << endl;
        }
    }
    void pop() {
        if (isEmpty()) {
            cout << "Stack is EMPTY! Cannot pop." << endl;
        } else {
            cout << arr[top--] << " popped from stack." << endl;
        }
    }
    void checkStatus() {
        if (isEmpty()) {
            cout << "Stack is currently EMPTY." << endl;
        } else if (isFull()) {
            cout << "Stack is currently FULL." << endl;
        } else {
            cout << "Stack is neither full nor empty. Current size: " << top + 1 << endl;
        }
    }
};

int main() {
    Stack s;
    int choice, value;

    do {
        cout << "\n--- Stack Menu ---" << endl;
        cout << "1. Push\n2. Pop\n3. Check Status\n4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter value to push: ";
                cin >> value;
                s.push(value);
                break;
            case 2:
                s.pop();
                break;
            case 3:
                s.checkStatus();
                break;
            case 4:
                cout << "Exiting program." << endl;
                break;
            default:
                cout << "Invalid choice! Try again." << endl;
        }
    } while (choice != 4);

    return 0;
}


