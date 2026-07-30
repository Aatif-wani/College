#include <iostream>
using namespace std;

// EXPRESSIONS: combinations of variables, constants, and operators that evaluate to a value

int main() {
    int a = 5, b = 10;

    int arithmeticExpr = (a + b) * 2;         // arithmetic expression
    bool relationalExpr = (a < b);            // relational expression (true/false)
    bool logicalExpr = (a > 0 && b > 0);       // logical expression (true/false)

    cout << "Arithmetic expression (a+b)*2 = " << arithmeticExpr << endl;
    cout << "Relational expression (a < b) = " << relationalExpr << endl;
    cout << "Logical expression (a>0 && b>0) = " << logicalExpr << endl;

    return 0;
}