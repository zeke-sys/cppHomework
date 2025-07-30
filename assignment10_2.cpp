#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

// Function double replace_if_greater(double* p, double x) replaces the value that p points to
// with x if x is greater than the value pointed to by p, and returns the original value pointed to by p.

double replace_if_greater(double* p, double x) {
    if (x > *p ) { // Check if x is greater than the value pointed to by p
        // Replace the value pointed to by p with x and return the original value
        double original_value = *p;
        *p = x;
        return original_value;
    }
    return *p; // Return the original value if no replacement was made
}

// Example usage:
int main() {
    double value = 4.1;
    double threshold = 6.3;

    cout << "Old value: " << value << endl;
    double old_value = replace_if_greater(&value, threshold);
    cout << "New value: " << value << endl;
    cout << "Replaced value: " << old_value << endl;

    return 0;
}