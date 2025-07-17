#include <iostream>
#include <iomanip> // for std::setprecision

using namespace std;

//This function void remove_min removes the minimum value from a partially filled array without calling other functions.
//This also updates the size reference parameter to reflect the new size of the array.
void remove_min(int arr[], int& size) {
    if (size <= 0) return; // If the array is empty, do nothing

    int minIndex = 0; // Initialize index of minimum element
    for (int i = 1; i < size; ++i) { // Find the index of the minimum element
        if (arr[i] < arr[minIndex]) {
            minIndex = i;
        }
    }

    // Shift elements to the left to remove the minimum element
    for (int i = minIndex; i < size - 1; ++i) {
        arr[i] = arr[i + 1];
    }

    --size; // Decrease the size of the array
}