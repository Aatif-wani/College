#include <iostream>
using namespace std;

// TOKENS: smallest individual units in a program (keywords, identifiers, constants, operators, etc.)
// KEYWORDS: reserved words with special meaning (int, const, return, if, etc.) - cannot be used as variable names
// IDENTIFIERS: names given by the programmer to variables, functions, classes (MAX, myVariable, main)
// CONSTANTS: fixed values that cannot change during execution

int main() {
    // 'const' is a KEYWORD. MAX is an IDENTIFIER. 100 is a CONSTANT.
    const int MAX = 100;

    // myVariable is an IDENTIFIER (a token)
    int myVariable = 5;

    // 'return' is also a KEYWORD

    cout << "MAX (constant) = " << MAX << endl;
    cout << "myVariable (identifier) = " << myVariable << endl;

    // Trying to do MAX = 200; here would cause a compile error, since MAX is const

    return 0;
}