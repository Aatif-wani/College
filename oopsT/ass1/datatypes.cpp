#include <iostream>
using namespace std;

// BASIC (PRIMITIVE) DATA TYPES: built into C++, represent single values

int main() {
    int a = 5;          // whole numbers
    float b = 5.5f;      // decimal numbers, less precision
    double c = 5.55555;  // decimal numbers, more precision than float
    char d = 'A';        // single character
    bool e = true;       // true or false (1 or 0)

    cout << "int: " << a << endl;
    cout << "float: " << b << endl;
    cout << "double: " << c << endl;
    cout << "char: " << d << endl;
    cout << "bool: " << e << endl;   // prints 1 for true, 0 for false

    // sizeof shows how many bytes each type takes in memory
    cout << "\nSizes in memory:" << endl;
    cout << "sizeof(int) = " << sizeof(a) << " bytes" << endl;
    cout << "sizeof(float) = " << sizeof(b) << " bytes" << endl;
    cout << "sizeof(double) = " << sizeof(c) << " bytes" << endl;
    cout << "sizeof(char) = " << sizeof(d) << " bytes" << endl;
    cout << "sizeof(bool) = " << sizeof(e) << " bytes" << endl;

    return 0;
}