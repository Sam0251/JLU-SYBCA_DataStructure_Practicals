//Write a program to input a 2D array (3x3) and display it in matrix form.
#include <iostream>
using namespace std;

int main() {
    int matrix[3][3];


    cout << "Enter elements for a 3x3 matrix:" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << "Element [" << i << "][" << j << "]: ";
            cin >> matrix[i][j];
        }
    }
	cout << "Matrix form:" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << matrix[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}



