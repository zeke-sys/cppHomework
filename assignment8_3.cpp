#include <iostream>
#include <iomanip> // for std::setprecision

using namespace std;

//This function string repeat returns the string str repeated n times
string repeat(const string& str, int n) { // Function to repeat a string n times using passing by reference
    if (n <= 0) return ""; // If n is less than or equal to 0, return an empty string
    if (str.empty()) return ""; // If the string is empty, return an empty string
    string result;
    for (int i = 0; i < n; ++i) { // Loop n times to append the string
        result += str;
    }
    return result;
} 