#include <iostream>
#include <iomanip> // for std::setprecision

using namespace std;

//this function void swap_first_last swaps the first and last elements of an array of intergers.
void swap_first_last(int arr[], int size) {
    if (size > 1) { // Ensure there are at least two elements to swap
        int temp = arr[0]; // Store the first element in a temporary variable
        arr[0] = arr[size - 1]; // Assign the last element to the first position
        arr[size - 1] = temp; // Assign the temporary variable (original first element) to the last position
    }
}