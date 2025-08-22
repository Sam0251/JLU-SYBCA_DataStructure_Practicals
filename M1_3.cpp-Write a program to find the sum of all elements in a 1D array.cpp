#include <iostream>
using namespace std;

int main() {
    int numbers[10];
    int sum = 0;
    cout << "Enter 10 integers:" << endl;
    for (int i = 0; i < 10; i++) {
        cout << "Element " << i + 1 << ": ";
        cin >> numbers[i];
        sum += numbers[i]; 
    }
    cout << "\nSum of all elements = " << sum << endl;

    return 0;
}

