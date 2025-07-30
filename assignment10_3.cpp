#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

// Function double average(double* a, int size) computes the average value of an array of floating-point data
// uses a pointer variable and pointer arithmetic to traverse the array
// instead of the array indexing notation with square brackets

double average(double* a, int size) {
    if (size <= 0) return 0.0; // Handle empty array case
    double sum = 0.0;
    for (int i = 0; i < size; ++i) {
        sum += *(a + i); // Pointer arithmetic to access array elements
    }
    return sum / size; // Return the average
}

// Example usage:
int main() {
    double arr[] = {1, 4, 9, 16, 25};
    int size = sizeof(arr) / sizeof(arr[0]); // Calculate the number of elements in the array

    //cout << fixed << setprecision(2); // Set output format for floating-point numbers
    cout << "Average: " << average(arr, size) << endl; // Call the average function and print the result

    return 0;
}