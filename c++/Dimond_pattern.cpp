#include <iostream>
using namespace std;

int main() {
    int n;
    while (true) {
        cout << "Enter the number of rows (should be an odd number): ";
        cin >> n;

        if (n % 2 != 0) {
            break; // Exit the loop if the number is odd
        }
        cout << "Please enter an odd number for a symmetric diamond pattern." << endl;
    }

    // Top half of the diamond
    for (int i = 1; i <= n; i += 2) {
        for (int j = 0; j < (n - i) / 2; j++) {
            cout << " ";
        }
        for (int j = 0; j < i; j++) {
            cout << "*";
        }
        cout << endl;
    }

    // Bottom half of the diamond
    for (int i = n - 2; i >= 1; i -= 2) {
        for (int j = 0; j < (n - i) / 2; j++) {
            cout << " ";
        }
        for (int j = 0; j < i; j++) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
