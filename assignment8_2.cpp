#include <iostream>
#include <iomanip> // for std::setprecision

using namespace std;

//This function bool all_different returns true if the three input parameters are all different (i.e., no two parameters are equal)
// and false otherwise.
bool all_different(double x, double y, double z) {
    return (x != y && x != z && y != z);
}