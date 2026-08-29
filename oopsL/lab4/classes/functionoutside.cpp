#include <iostream>
using namespace std;

class Rectangle {
private:
    int length, width;
public:
    void input();
    int area();
};

void Rectangle::input() {
    cout << "Enter length and width: ";
    cin >> length >> width;
}

int Rectangle::area() {
    return length * width;
}

int main() {
    Rectangle r;
    r.input();
    cout << "Area = " << r.area() << endl;
    return 0;
}