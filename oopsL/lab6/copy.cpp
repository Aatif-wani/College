#include <iostream>
#include <string>
using namespace std;

class Student {
    int roll_no;
    string name;
    float marks;

public:
    // Parameterized constructor
    Student(string n, int r, float m) {
        name = n;
        roll_no = r;
        marks = m;
    }

    // Copy constructor
    Student(const Student &s) {
        name = s.name;
        roll_no = s.roll_no;
        marks = s.marks;
    }

    void display() {
        cout << "Name: " << name
             << ", Roll No: " << roll_no
             << ", Marks: " << marks << endl;
    }
};

int main() {
    Student s1("Amit", 1, 85.5);
    Student s2(s1);   // copy constructor is called

    cout << "Original object:" << endl;
    s1.display();

    cout << "Copied object:" << endl;
    s2.display();

    return 0;
}