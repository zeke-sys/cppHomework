#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

// Structure Point with member variables x and y of type double
// Function computes distance from Point a to Point b
struct Point {
    double x;
    double y;
};

// Function to calculate the distance between two points
double distance(const Point& a, const Point& b) {
    return sqrt(pow(b.x - a.x, 2) + pow(b.y - a.y, 2));
}   

// Usage example
int main() {
    Point p1 = {3.0, 4.0}; // Initialize first point
    Point p2 = {6.0, 8.0}; // Initialize second point

    cout << fixed << setprecision(2); // Set output format to fixed with two decimal places
    cout << "Distance between points (" << p1.x << ", " << p1.y << ") and ("
         << p2.x << ", " << p2.y << ") is: " 
         << distance(p1, p2) << endl; // Call distance function and print result

    return 0;
}