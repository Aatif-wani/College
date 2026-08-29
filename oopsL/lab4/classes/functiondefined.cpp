#include <iostream>
using namespace std;

class Square {
private:
    int side;
public:
    void input() {
        cout << "Enter side of square: ";
        cin >> side;
    }
    int area() {          // defined inside class
        return side * side;
    }
};

int main() {
    Square sq;
    sq.input();
    cout << "Area = " << sq.area() << endl;
    return 0;
}