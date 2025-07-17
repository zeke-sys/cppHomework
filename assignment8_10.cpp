#include <iostream>

using namespace std;

//this function bool values_indentical_2d checks whether all elements in a two-dimensional array are indentical
//assuming that the number of columns in the two-dimensional array will be 3

// Function to check if all elements in a 2D array are identical
// arr: 2D array with 3 columns per row
// rows: number of rows in the array
bool values_identical_2d(int arr[][3], int rows) {
    int first = arr[0][0]; // Store the first element to compare with others
    for (int i = 0; i < rows; ++i) { // Iterate through each row
        for (int j = 0; j < 3; ++j) { // Iterate through each column
            if (arr[i][j] != first) { // If any element differs, return false
                return false;
            }
        }
    }
    return true; // All elements are identical
}