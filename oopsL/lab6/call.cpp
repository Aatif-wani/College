#include <iostream>
using namespace std;

class Demo {
    int x;

public:
    Demo(int x) {
        this->x = x;
        this->show();   // calling another member function using this
    }

    void show() {
        cout << "x = " << x << endl;
    }
};

int main() {
    Demo d(10);

    return 0;
}