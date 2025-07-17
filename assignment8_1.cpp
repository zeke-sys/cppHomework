#include <iostream>
#include <iomanip>

using namespace std;

//this program double smallest returns the value of the smallest of its three input parameters
double smallest(double a, double b, double c) {
    if (a <= b && a <= c) {
        return a;
    } else if (b <= a && b <= c) {
        return b;
    } else {
        return c;
    }
}


