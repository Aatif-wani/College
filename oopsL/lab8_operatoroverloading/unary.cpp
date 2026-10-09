#include <iostream>
using namespace std;

class Number
{
    int x;

public:
    Number(int a)
    {
        x = a;
    }

    // Unary minus operator
    Number operator-()
    {
        return Number(-x);
    }

    // Unary plus operator
    Number operator+()
    {
        return Number(+x);
    }

    void display()
    {
        cout << "Value = " << x << endl;
    }
};

int main()
{
    Number n(10);

    Number n1 = -n;
    Number n2 = +n;

    cout << "Original: ";
    n.display();

    cout << "After unary - : ";
    n1.display();

    cout << "After unary + : ";
    n2.display();

    return 0;
}