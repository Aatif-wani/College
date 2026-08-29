#include <iostream>
using namespace std;

class Numbers {
private:
    int a, b;
public:
    void input() {
        cout << "Enter two numbers: ";
        cin >> a >> b;
    }
    int sum() {
        return a + b;
    }
    int largest() {
        return (a > b) ? a : b;
    }
    void checkEvenOdd() {
        cout << a << (a % 2 == 0 ? " is Even" : " is Odd") << endl;
        cout << b << (b % 2 == 0 ? " is Even" : " is Odd") << endl;
    }
};

int main() {
    Numbers n;
    n.input();
    cout << "Sum = " << n.sum() << endl;
    cout << "Largest = " << n.largest() << endl;
    n.checkEvenOdd();
    return 0;
}