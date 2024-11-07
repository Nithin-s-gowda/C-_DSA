#include <iostream>
using namespace std;

int main() {
    int rows = 3; // Number of rows to print

    for (int i = 0; i < rows; i++) {
        // Print characters in reverse order for each row
        for (int j = i; j >= 0; j--) {
            cout << char('a' + j); // Convert to character starting from 'a'
        }
        cout << "\n"; // Move to the next line after each row
    }

    return 0;
}