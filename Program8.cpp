//write a program to find det of matrix inserted by user
#include <iostream>
using namespace std;

int main() {
    int matrix[3][3];
    cout << "Enter elements of a 3x3 matrix:\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> matrix[i][j];
        }
}
    int determinant = 
        matrix[0][0] * (matrix[1][1] * matrix[2][2] - matrix[1][2] * matrix[2][1]) -
        matrix[0][1] * (matrix[1][0] * matrix[2][2] - matrix[1][2] * matrix[2][0]) +
        matrix[0][2] * (matrix[1][0] * matrix[2][1] - matrix[1][1] * matrix[2][0]);
    cout << "Determinant of the matrix is: " << determinant << endl;

    return 0;
}

