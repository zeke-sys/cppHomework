#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

// Function returns a pointer to the first occurrence of the character c in the string s, or nullptr if there is no match
// Uses pointer arithmetic to traverse the string instead of array indexing notation
// instead of the array indexing notation with square brackets

char* find_first(char s[], char c) {
    char* ptr = s; // Initialize pointer to the start of the string
    while (*ptr != '\0') { // Traverse until the null terminator
        if (*ptr == c) { // Check if the current character matches c
            return ptr; // Return pointer to the first occurrence of c
        }
        ptr++; // Move to the next character
    }
    return nullptr; // Return nullptr if c is not found
}

// Example usage:
int main() {
    char str[] = "This is a sample string";
    char ch = 'a'; // Character to find

    char* result = find_first(str, ch); // Call the find_first function
    if (result) {
        cout << "First occurrence of '" << ch << "' is at position: " << (result - str) << endl; // Calculate position
    } else {
        cout << "'" << ch << "' not found in the string." << endl; // Handle case where character is not found
    }

    return 0;
}