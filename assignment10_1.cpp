#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include <cmath>

using namespace std;


// Function receives two pointers and sorts the values to which they point
// if you call sort2(&x, &y), then x <= y after the call
void sort2(double* a, double* b) {
    if (*a > *b) {
        double temp = *a;
        *a = *b;
        *b = temp;
    }
}

// Example usage:
int main() {
    double x = 7.1, y = 3.3;
    sort2(&x, &y);
    cout << "x = " << x << ", y = " << y << endl;
    return 0;
}