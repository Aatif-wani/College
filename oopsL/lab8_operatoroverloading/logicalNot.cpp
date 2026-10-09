#include <iostream>
using namespace std;

class Numbers
{
    int a, b;

public:
    Numbers(int x, int y)
    {
        a = x;
        b = y;
    }

    bool operator!()
    {
        if (a == 0 && b == 0)
            return true;
        else
            return false;
    }
};

int main()
{
    Numbers n1(0, 0);
    Numbers n2(5, 0);

    if (!n1)
        cout << "Both values are zero." << endl;
    else
        cout << "Values are not both zero." << endl;

    if (!n2)
        cout << "Both values are zero." << endl;
    else
        cout << "Values are not both zero." << endl;

    return 0;
}