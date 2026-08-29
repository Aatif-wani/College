#include <iostream>
using namespace std;

class SimpleInterest {
private:
    float principal, rate, time;
public:
    void input() {
        cout << "Enter principal, rate, and time: ";
        cin >> principal >> rate >> time;
    }
    float calculate() {
        return (principal * rate * time) / 100;
    }
};

int main() {
    SimpleInterest si;
    si.input();
    cout << "Simple Interest = " << si.calculate() << endl;
    return 0;
}