/**
 * @brief Checks whether two integer arrays have the same elements in the same order.
 * 
 * Compares the contents of array 'a' and array 'b' element by element up to 'b_size'.
 * Returns true if all corresponding elements are equal; otherwise, returns false.
 * 
 * @param a The first integer array to compare.
 * @param b The second integer array to compare.
 * @param b_size The number of elements to compare in both arrays.
 * @return true if both arrays are equal up to b_size elements, false otherwise.
 */
#include <iostream>

using namespace std;

//This function bool equals checks whether two arrays have the same elements in the same order

bool equals(int a[], int a_size, int b[], int b_size) {
    if (a_size != b_size) {
        return false;
    }
    for (int i = 0; i < a_size; ++i) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}