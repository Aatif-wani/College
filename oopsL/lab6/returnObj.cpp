#include <iostream>
using namespace std;

class Box {
    int x;

public:
    Box(int x) {
        this->x = x;
    }

    Box& getObject() {
        return *this;   // returns the current object
    }

    void show() {
        cout << "x = " << x << endl;
    }
};

int main() {
    Box d(10);

    Box& obj = d.getObject();
    obj.show();

    return 0;
}