#include <iostream>
using namespace std;

class Swap {
private:
    int a, b;
public:
    void input() {
        cout << "Enter two numbers: ";
        cin >> a >> b;
    }
    void swapNumbers() {
        int temp = a;
        a = b;
        b = temp;
    }
    void display() {
        cout << "After swap: a = " << a << ", b = " << b << endl;
    }
};

int main() {
    Swap s;
    s.input();
    s.swapNumbers();
    s.display();
    return 0;
}