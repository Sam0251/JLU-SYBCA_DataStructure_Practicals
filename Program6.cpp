//write a program to print sum of 2 diagonal of matrix 4*4
#include <iostream>
using namespace std;

int main() {
    int matrix[4][4];
    int primarySum = 0, secondarySum = 0;
    cout << "Enter elements of the 4x4 matrix:\n";
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            cin >> matrix[i][j];
        }
    }
    for (int i = 0; i < 4; i++) {
        primarySum += matrix[i][i];           
        secondarySum += matrix[i][3 - i];    
    }
    cout << "Primary diagonal sum: " << primarySum << endl;
    cout << "Secondary diagonal sum: " << secondarySum << endl;
    cout << "Total sum of both diagonals: " << (primarySum + secondarySum) << endl;

    return 0;
}

