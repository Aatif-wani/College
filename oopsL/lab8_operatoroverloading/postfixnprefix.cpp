#include <iostream>
using namespace std;

class Date
{
    int day, month, year;

public:
    Date(int d, int m, int y)
    {
        day = d;
        month = m;
        year = y;
    }

    // Prefix ++
    Date operator++()
    {
        day++;
        return *this;
    }

    // Postfix ++
    Date operator++(int)
    {
        Date temp = *this;
        day++;
        return temp;
    }

    void display()
    {
        cout << day << "/" << month << "/" << year << endl;
    }
};

int main()
{
    Date d1(15, 10, 2026);

    cout << "Original date: ";
    d1.display();

    ++d1;

    cout << "After prefix ++: ";
    d1.display();

    d1++;

    cout << "After postfix ++: ";
    d1.display();

    return 0;
}