#include <iostream>
using namespace std;

int main() {
    int numbers[5];
    cout << "Enter 5 integers:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "Element " << i + 1 << ": ";
        cin >> numbers[i];
    }
    cout << "Elements of an array:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "Element at index " << i << " = " << numbers[i] << endl;
    }

    return 0;
}

