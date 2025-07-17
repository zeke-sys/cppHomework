#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

//This function vector<string> shift_uppercase(vector<string> list) takes in a vector<string., moves all strings
//with an uppercase letter to the front, without otherwise changing the order of the elements, and returns
//the resulting vector

vector<string> shift_uppercase(vector<string> list) {
    // Vector to store strings containing at least one uppercase letter
    vector<string> uppercase;
    vector<string> others;
    for (const auto& str : list) {
        if (any_of(str.begin(), str.end(), ::isupper)) {
            uppercase.push_back(str);
        } else {
            // If the string does not contain any uppercase letter, add it to 'others' vector
            others.push_back(str);
        }
    }
    uppercase.insert(uppercase.end(), others.begin(), others.end());
    return uppercase;
}