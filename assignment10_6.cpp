#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

// Function reverses the values of an array of floating-point data
// Uses pointer arithmetic to traverse the array instead of array indexing notation with square brackets

void reverse(double* arr, int size) {
    double* start = arr; // Pointer to the start of the array
    double* end = arr + size - 1; // Pointer to the end of the array

    while (start < end) { // Swap until the pointers meet
        double temp = *start; // Store value at start
        *start = *end; // Assign value at end to start
        *end = temp; // Assign stored value to end
        start++; // Move start pointer forward
        end--; // Move end pointer backward
    }
}

// Example usage:
int main() {
    const int SIZE = 5; // Size of the array
    double arr[SIZE] = {1, 4, 9, 16, 25}; // Initialize array with floating-point values

    cout << "Original array: ";
    for (int i = 0; i < SIZE; i++) {
        cout << arr[i] << " "; // Print original array
    }
    cout << endl;

    reverse(arr, SIZE); // Call the reverse function

    cout << "Reversed array: ";
    for (int i = 0; i < SIZE; i++) {
        cout << arr[i] << " "; // Print reversed array
    }
    cout << endl;

    return 0;
}