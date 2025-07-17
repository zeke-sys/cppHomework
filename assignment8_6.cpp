#include <iostream>
#include <iomanip> // for std::setprecision

using namespace std;

//This function void replace_even replaces all even elements in an array of integers with the value 0.
void replace_even(int arr[], int size) {
    for (int i = 0; i < size; ++i) { // Loop through each element in the array
        if (arr[i] % 2 == 0) { // Check if the element is even
            arr[i] = 0; // Replace even element with 0
        }
    }
}