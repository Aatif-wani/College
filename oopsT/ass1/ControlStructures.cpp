#include <iostream>
using namespace std;

// CONTROL STRUCTURES: statements that control the flow of execution (decision-making, looping)

int main() {
    int x = 60;

    // if-else - decision making
    if (x > 50) {
        cout << "x is greater than 50" << endl;
    } else {
        cout << "x is 50 or less" << endl;
    }

    // for loop - repeats a fixed number of times
    cout << "for loop: ";
    for (int i = 0; i < 3; i++) {
        cout << i << " ";
    }
    cout << endl;

    // while loop - repeats while a condition is true
    cout << "while loop: ";
    int count = 0;
    while (count < 3) {
        cout << count << " ";
        count++;
    }
    cout << endl;

    // switch - selects one of many branches based on a value
    int day = 2;
    switch (day) {
        case 1:
            cout << "Monday" << endl;
            break;
        case 2:
            cout << "Tuesday" << endl;
            break;
        default:
            cout << "Some other day" << endl;
    }

    return 0;
}