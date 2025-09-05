#include <iostream>

using namespace std;

struct Rectangle {
    double width;
    double height;
};

void updateRectangle(Rectangle r, int value) {
    r.width += value;
    r.height += value;
}

int main() {
    Rectangle r;
    r.width = 2;
    r.height = 5;
    updateRectangle(r, 10);
    cout << "Width: " << r.width << endl;
    cout << "Height: " << r.height << endl;
    return 0;
}