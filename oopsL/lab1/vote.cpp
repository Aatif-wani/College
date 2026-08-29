// 30th july
#include <iostream>
using namespace std;

int main() {
    int age;
    char nationality;

    cout << "Enter your age: ";
    cin >> age;

    cout << "Are you an Indian citizen? (Y/N): ";
    cin >> nationality;

    if (age >= 18 && (nationality == 'Y' || nationality == 'y')) {
        cout << "You are eligible to vote." << endl;
    } else {
        cout << "You are not eligible to vote." << endl;
    }

    return 0;
}
