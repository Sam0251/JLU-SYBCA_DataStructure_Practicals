//code to print stack using pop condition
#include <iostream>
using namespace std;

#define SIZE 5   
class Stack {
    int stack[SIZE];
    int top;

public:
    Stack() {
        top = -1;
    }
    void push(int element) {
        if (top == SIZE - 1) {
            cout << "Stack Full (Overflow)" << endl;
        } else {
            top++;
            stack[top] = element;
            cout << element << " pushed into stack" << endl;
        }
    }
    void pop() {
        if (top == -1) {
            cout << "Stack Empty (Underflow)" << endl;
        } else {
            cout << stack[top] << " popped from stack" << endl;
            stack[top] = 0;  // optional reset
            top--;
        }
    }
    void display() {
        if (top == -1) {
            cout << "Stack is Empty" << endl;
        } else {
            cout << "Stack elements are:" << endl;
            for (int i = top; i >= 0; i--) {
                cout << stack[i] << endl;
            }
        }
    }
};

int main() {
    Stack s;
    int choice, element;

    while (true) {
        cout << "\n--- Stack Menu ---\n";
        cout << "1. Push\n";
        cout << "2. Pop\n";
        cout << "3. Display\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter element to push: ";
                cin >> element;
                s.push(element);
                break;

            case 2:
                s.pop();
                break;

            case 3:
                s.display();
                break;

            case 4:
                cout << "Exiting program..." << endl;
                return 0;

            default:
                cout << "Invalid choice! Try again." << endl;
        }
    }
}

