#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

// Structure Point with member variables x and y of type double
// Function computes the halfway point between Point a and Point b and returns the midpoint
struct Point {
    double x;
    double y;
};

// Function to calculate the midpoint between two points
Point midpoint(const Point& a, const Point& b) {
    Point mid;
    mid.x = (a.x + b.x) / 2.0; // Calculate x-coordinate of midpoint
    mid.y = (a.y + b.y) / 2.0; // Calculate y-coordinate of midpoint
    return mid; // Return the midpoint
}

// Usage example
int main() {
    Point p1 = {3.0, 4.0}; // Initialize first point
    Point p2 = {6.0, 8.0}; // Initialize second point

    cout << fixed << setprecision(2); // Set output format to fixed with two decimal places
    Point mid = midpoint(p1, p2); // Call midpoint function
    cout << "Midpoint between points (" << p1.x << ", " << p1.y << ") and ("
         << p2.x << ", " << p2.y << ") is: (" 
         << mid.x << ", " << mid.y << ")" << endl; // Print the midpoint

    return 0;
}