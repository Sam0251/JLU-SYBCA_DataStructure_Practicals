//Write a program to count even and odd numbers in an array.
#include <iostream>
using namespace std;

int main() {
    int arr[10], evenCount = 0, oddCount = 0;

    // Input elements
    cout << "Enter 10 integers:" << endl;
    for (int i = 0; i < 10; i++) {
        cout << "arr[" << i << "]: ";
        cin >> arr[i];
    }

    // Count even and odd numbers
    for (int i = 0; i < 10; i++) {
        if (arr[i] % 2 == 0)
            evenCount++;
        else
            oddCount++;
    }

    // Display results
    cout << "\nTotal Even Numbers: " << evenCount << endl;
    cout << "Total Odd Numbers: " << oddCount << endl;

    return 0;
}


