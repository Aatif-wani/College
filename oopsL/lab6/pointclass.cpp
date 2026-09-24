#include <iostream>
using namespace std;

class Point {
    int x;
    int y;

public:
    // Parameterized constructor
    Point(int a, int b) {
        x = a;
        y = b;
    }

    // Copy constructor
    Point(const Point &p) {
        x = p.x;
        y = p.y;
    }

    void display() {
        cout << "(" << x << ", " << y << ")" << endl;
    }
};

int main() {
    Point p1(10, 20);
    Point p2(p1);   // copy constructor is called

    cout << "Original point: ";
    p1.display();

    cout << "Copied point: ";
    p2.display();

    return 0;
}