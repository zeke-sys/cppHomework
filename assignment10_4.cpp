#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

// Function that returns a pointer to the maximum value of an array of floating-point data
// if size is zero, it returns nullptr
// uses a pointer variable and pointer arithmetic to traverse the array
// instead of the array indexing notation with square brackets

double* maximum(double* arr, int size) {
    if (size <= 0) return nullptr; // Handle empty array case
    double* maxPtr = arr; // Initialize pointer to the first element
    for (int i = 1; i < size; ++i) {
        if (*(arr + i) > *maxPtr) { // Compare current element with the current maximum
            maxPtr = arr + i; // Update pointer to the new maximum
        }
    }
    return maxPtr; // Return pointer to the maximum value
}

// Example usage:
int main() {
    double arr[] = {1, -4, 15, 9, 6};
    int size = sizeof(arr) / sizeof(arr[0]); // Calculate the number of elements in the array

    double* maxValuePtr = maximum(arr, size); // Call the maximum function
    if (maxValuePtr) {
        cout << "Maximum value: " << *maxValuePtr << endl; // Dereference pointer to get the maximum value
    } else {
        cout << "Array is empty." << endl; // Handle empty array case
    }

    return 0;
}