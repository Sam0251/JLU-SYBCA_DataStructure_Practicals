//Write a program to evaluate a postfix expression using stack.
#include <iostream>
#include <stack>
#include <string>
using namespace std;
int evaluatePostfix(const string& expr) {
    stack<int> st;

    for (char c : expr) {
        if (isdigit(c)) {
            st.push(c - '0');
        } else {
            int val2 = st.top(); st.pop();
            int val1 = st.top(); st.pop();
            switch (c) {
                case '+': st.push(val1 + val2); break;
                case '-': st.push(val1 - val2); break;
                case '*': st.push(val1 * val2); break;
                case '/': st.push(val1 / val2); break;
                default: cout << "Invalid operator: " << c << endl; return -1;
            }
        }
    }

    return st.top();
}

int main() {
    string postfix;
    cout << "Enter postfix expression (e.g., 23*5+): ";
    cin >> postfix;

    int result = evaluatePostfix(postfix);
    cout << "Result: " << result << endl;

    return 0;
}

