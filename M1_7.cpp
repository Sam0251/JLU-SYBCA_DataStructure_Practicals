//Write a program to perform element-wise addition of two 1D arrays.
#include <iostream>
using namespace std;

int main() {
    int arr1[5], arr2[5], sum[5];
    cout << "Enter 5 elements for the first array:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "arr1[" << i << "]: ";
        cin >> arr1[i];
    }
    cout << "\nEnter 5 elements for the second array:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "arr2[" << i << "]: ";
        cin >> arr2[i];
    }

    for (int i = 0; i < 5; i++) {
        sum[i] = arr1[i] + arr2[i];
    }
    cout << "\nElement-wise sum of the two arrays:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "sum[" << i << "] = " << sum[i] << endl;
    }
     return 0;
}



