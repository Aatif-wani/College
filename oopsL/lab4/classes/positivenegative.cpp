#include <iostream>
using namespace std;

class CheckNumber {
private:
    int num;
public:
    void input() {
        cout << "Enter a number: ";
        cin >> num;
    }
    void check() {
        if (num > 0)
            cout << num << " is Positive" << endl;
        else if (num < 0)
            cout << num << " is Negative" << endl;
        else
            cout << "The number is Zero" << endl;
    }
};

int main() {
    CheckNumber c;
    c.input();
    c.check();
    return 0;
}