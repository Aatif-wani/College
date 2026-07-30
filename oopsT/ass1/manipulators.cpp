#include <iostream>
#include <iomanip>   // needed for setw, setprecision, fixed
using namespace std;

// MANIPULATORS: special functions/objects used with cin/cout to format input/output

int main() {
    // setw(n) - sets the width of the next output field (right-aligned by default)
    cout << setw(10) << "Name" << setw(10) << "Score" << endl;
    cout << setw(10) << "Aatif" << setw(10) << 95 << endl;

    // fixed + setprecision(n) - controls number of digits after decimal point
    cout << fixed << setprecision(2) << "Pi rounded: " << 3.14159 << endl;

    // endl - inserts a newline and flushes the output buffer (also a manipulator!)
    cout << "This line ends with endl" << endl;

    return 0;
}