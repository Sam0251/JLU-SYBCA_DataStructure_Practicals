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
    void push(int value) {
        if (top >= SIZE - 1) {
            cout << "Stack Overflow! Cannot push " << value << endl;
        } else {
            top++;
            arr[top] = value;
            cout << value << " pushed to stack." << endl;
        }
    }
    void pop() {
        if (top < 0) {
            cout << "Stack Underflow! Cannot pop." << endl;
        } else {
            cout << arr[top] << " popped from stack." << endl;
            top--;
        }
    }
    void display() {
        if (top < 0) {
            cout << "Stack is empty." << endl;
        } else {
            cout << "Stack elements (top to bottom): ";
            for (int i = top; i >= 0; i--) {
                cout << arr[i] << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    Stack s;
    int choice, value;

    do {
        cout << "\n--- Stack Menu ---" << endl;
        cout << "1. Push\n2. Pop\n3. Display\n4. Exit" << endl;
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
                s.display();
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

