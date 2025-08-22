//Write a program to input 10 numbers in an array and display them.
#include <iostream>
using namespace std;

int main() {
    int numbers[10];
    cout << "Enter 10 integers:" << endl;
    for (int i = 0; i < 10; i++) {
        cout << "Element " << i + 1 << ": ";
        cin >> numbers[i];
    }

    cout << "Enter a number" << endl;
    for (int i = 0; i < 10; i++) {
        cout << "Element at index " << i << " = " << numbers[i] << endl;
    }

    return 0;
}



