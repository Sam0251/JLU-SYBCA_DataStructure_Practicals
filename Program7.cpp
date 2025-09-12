//Write a program to print product of 2 matrix and size of matrix is 4*4 in c++
#include <iostream>
using namespace std;

int main() {
    int matrix1[4][4], matrix2[4][4], product[4][4];

    cout << "Enter elements of first 4x4 matrix:\n";
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            cin >> matrix1[i][j];
        }
    }
    
    cout << "Enter elements of second 4x4 matrix:\n";
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            cin >> matrix2[i][j];
        }
    }
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            product[i][j] = 0;
        }
    }
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            for (int k = 0; k < 4; k++) {
                product[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }
    cout << "Product of the two matrices:\n";
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            cout << product[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}

