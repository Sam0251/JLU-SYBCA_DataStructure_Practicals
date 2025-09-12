//Write a program to create an array having 15 elements take the input from user then find the index whose value is insterted by user
#include <iostream>
using namespace std;

int main() {
    int arr[15];
    int value, index = -1;
    cout << "Enter 15 integers:\n";
    for (int i = 0; i < 15; i++) {
        cout << "Element " << i << ": ";
        cin >> arr[i];
    }
    cout << "Enter value to search in array: ";
    cin >> value;
    for (int i = 0; i < 15; i++) {
        if (arr[i] == value) {
            index = i;
            break;
        }
    }
    if (index != -1)
        cout << "Value found at index: " << index << endl;
    else
        cout << "Value not found in the array." << endl;

    return 0;
}

