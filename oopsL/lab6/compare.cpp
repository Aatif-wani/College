#include <iostream>
using namespace std;

class Demo {
    int x;

public:
    Demo(int x) {
        this->x = x;
    }

    // Compares the current object (this) with another object
    void compare(Demo &other) {
        if (this->x == other.x)
            cout << "Both objects have equal data." << endl;
        else if (this->x > other.x)
            cout << "Current object has greater data: " << this->x << endl;
        else
            cout << "Other object has greater data: " << other.x << endl;
    }
};

int main() {
    Demo d1(10), d2(20);

    d1.compare(d2);

    return 0;
}