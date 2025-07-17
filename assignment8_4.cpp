#include <iostream>
#include <iomanip> // for std::setprecision

using namespace std;

//This function void sort2 swaps the values of a and b if a is greater than b and otherwise leaves them unchanged.
void sort2(double& a, double& b) { // Function to sort two numbers using passing by reference
    if (a > b) {
        double temp = a; // Temporary variable to hold the value of a
        a = b; // Assign the value of b to a
        b = temp; // Assign the value of temp (original a) to b
    }
}