#include <iostream>
using namespace std;

int main() {
    int numbers[10];
    int max, min;
    cout << "Enter 10 integers:" << endl;
    for (int i = 0; i < 10; i++) {
        cout << "Element " << i + 1 << ": ";
        cin >> numbers[i];
        if (i == 0) {
            max = min = numbers[i];
        } else {
            if (numbers[i] > max)
                max = numbers[i];
            if (numbers[i] < min)
                min = numbers[i];
        }
    }
    cout << "Maximum element = " << max << endl;
    cout << "Minimum element = " << min << endl;

    return 0;
}


