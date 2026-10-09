#include <iostream>
using namespace std;

class Student
{
    int marks;

public:
    Student(int m = 0)
    {
        marks = m;
    }

    Student operator+(Student s)
    {
        Student temp;

        temp.marks = marks + s.marks;

        return temp;
    }

    void display()
    {
        cout << "Marks = " << marks << endl;
    }
};

int main()
{
    Student s1(80);
    Student s2(90);

    Student s3 = s1 + s2;

    cout << "Student 1: ";
    s1.display();

    cout << "Student 2: ";
    s2.display();

    cout << "Total: ";
    s3.display();

    return 0;
}