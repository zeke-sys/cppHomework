#include <iostream>

using namespace std;

int main() {
    int x = 5;
    int y = 20;
    int* p = &x;
    *p = y;
    y = 15;
    cout << *p << endl;
    return 0;
}