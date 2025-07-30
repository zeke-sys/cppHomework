#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

// Function reverses a character array
// Uses pointer arithmetic to traverse the array instead of array indexing notation with square brackets
// For example, "Harry" becomes "yrraH"

void reverse(char s[]) {
    char* start = s; // Pointer to the start of the array
    char* end = s; // Pointer to the end of the array

    // Move end pointer to the last character
    while (*end != '\0') {
        end++;
    }
    end--; // Adjust to point to the last character

    while (start < end) { // Swap until the pointers meet
        char temp = *start; // Store value at start
        *start = *end; // Assign value at end to start
        *end = temp; // Assign stored value to end
        start++; // Move start pointer forward
        end--; // Move end pointer backward
    }
}

// Example usage:
int main() {
    char str[] = "Harry"; // Initialize character array

    cout << "Original string: " << str << endl; // Print original string

    reverse(str); // Call the reverse function

    cout << "Reversed string: " << str << endl; // Print reversed string

    return 0;
}

