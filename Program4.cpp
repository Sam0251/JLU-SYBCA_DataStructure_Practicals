//Write a program to represent to create a matrix 3*2 having all the even number in such  a way that number in the 2nd row should be the doble of number in the first row
#include <iostream>
using namespace std;

int main() {
    int matrix[3][2];
    int even = 2;
    for (int j = 0; j < 2; j++) {
        matrix[0][j] = even;
        even += 2;
    }
    for (int j = 0; j < 2; j++) {
        matrix[1][j] = 2 * matrix[0][j];
    }
    for (int j = 0; j < 2; j++) {
        matrix[2][j] = even;
        even += 2;
    }
    cout << "3x2 Matrix:" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {
            cout << matrix[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}

