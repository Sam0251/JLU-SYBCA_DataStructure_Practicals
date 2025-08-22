//Write a program to reverse the elements of a 1D array.
#include <iostream>
using namespace std;

int main() {
    int arr[10];
    cout << "Enter 10 elements of the array:" << endl;
    for (int i = 0; i < 10; i++) {
        cout << "Element " << i + 1 << ": ";
        cin >> arr[i];
    }
    for (int i = 0; i < 5; i++) {
        int temp = arr[i];
        arr[i] = arr[9 - i];
        arr[9 - i] = temp;
    }


    cout << "Reversed array:" << endl;
    for (int i = 0; i < 10; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}






