#include <iostream>
#include <string>
using namespace std;

class Student {
    int roll_no;
    string name;
    float marks;

public:
    // Constructor 1: Name only
    Student(string name) {
        this->name = name;
    }

    // Constructor 2: Name and roll number
    Student(string name, int roll_no) {
        this->name = name;
        this->roll_no = roll_no;
    }

    // Constructor 3: Name, roll number, and marks
    Student(string name, int roll_no, float marks) {
        this->name = name;
        this->roll_no = roll_no;
        this->marks = marks;
    }

    void display() {
        cout << "Name: " << name
             << ", Roll No: " << roll_no
             << ", Marks: " << marks << endl;
    }
};

int main() {
    Student s1("Amit");
    Student s2("Riya", 2);
    Student s3("Karan", 3, 87.5);

    s1.display();
    s2.display();
    s3.display();

    return 0;
}