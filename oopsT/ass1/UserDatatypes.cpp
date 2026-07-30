#include <iostream>
using namespace std;

// USER-DEFINED DATA TYPES: types the programmer creates (struct, enum, class)

// struct - groups related variables together under one name
struct Point {
    int x, y;
};

// enum - gives readable names to a set of integer constants
enum Color { RED, GREEN, BLUE };   // RED=0, GREEN=1, BLUE=2 by default

// class - like struct, but supports access specifiers and member functions
class Circle {
public:
    int radius;
    void showArea() {
        cout << "Area of circle: " << 3.14 * radius * radius << endl;
    }
};

int main() {
    // Using struct
    Point p1;
    p1.x = 10;
    p1.y = 20;
    cout << "Point p1: (" << p1.x << ", " << p1.y << ")" << endl;

    // Using enum
    Color favColor = GREEN;
    cout << "favColor (underlying int value): " << favColor << endl;

    // Using class
    Circle c1;
    c1.radius = 7;
    c1.showArea();

    return 0;
}