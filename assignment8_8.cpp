#include <iostream>
#include <iomanip> // for std::setprecision

using namespace std;

//This function alternating_sum computes the alternating sum of all elements in an array and returns the result
int alternating_sum(int a[], int size) {
    int result = 0;
    for (int i = 0; i < size; ++i) {
        if (i % 2 == 0) {
            result += a[i];
        }   
        else {
            result -= a[i];
        }      
    }
    return result;
}