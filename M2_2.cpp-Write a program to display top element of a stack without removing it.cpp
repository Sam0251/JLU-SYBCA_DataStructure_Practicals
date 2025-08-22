#include <iostream>
#include <stack>
using namespace std;

int main() {
    stack<int> myStack;
    myStack.push(10);
    myStack.push(20);
    myStack.push(30);
    if (!myStack.empty()) {
        cout << "Top element of the stack is: " << myStack.top() << endl;
    } else {
        cout << "Stack is empty. No top element to display." << endl;
    }

    return 0;
}


