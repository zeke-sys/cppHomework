#include <iostream>

using namespace std;

// This program checks the value of a variable and prints corresponding grades
// based on the specified ranges.
// Wrong way to do it, but it works for the given example.
// The output will be "FCB" for the value of 40.

int main() {
    int value = 40;
    if (value <= 40) {
        cout << "F";
    }
    if (value <= 75) {
        cout << "C";
    }
    if (value <= 90) {
        cout << "B";
    }
    return 0;
}

