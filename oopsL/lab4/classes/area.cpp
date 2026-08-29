#include <iostream>
using namespace std;

class Shapes {
private:
    double length, width, radius;
public:
    void inputRectangle() {
        cout << "Enter length and width of rectangle: ";
        cin >> length >> width;
    }
    void inputCircle() {
        cout << "Enter radius of circle: ";
        cin >> radius;
    }
    double rectangleArea() {
        return length * width;
    }
    double circleArea() {
        return 3.14159 * radius * radius;
    }
};

int main() {
    Shapes s;
    s.inputRectangle();
    cout << "Rectangle Area = " << s.rectangleArea() << endl;
    s.inputCircle();
    cout << "Circle Area = " << s.circleArea() << endl;
    return 0;
}