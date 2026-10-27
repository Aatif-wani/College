#include <iostream>
#include <string>
using namespace std;

// Base class 1
class Student {
private:
    string name;
    int rollNo;
    string course;

public:
    void input() {
        cout << "Enter student name: ";
        cin >> name;

        cout << "Enter roll number: ";
        cin >> rollNo;

        cout << "Enter course: ";
        cin >> course;
    }

    void display() {
        cout << "\n--- Academic Details ---" << endl;
        cout << "Name: " << name << endl;
        cout << "Roll Number: " << rollNo << endl;
        cout << "Course: " << course << endl;
    }
};

// Base class 2
class Employee {
private:
    int employeeId;
    string department;
    float salary;

public:
    void input() {
        cout << "\nEnter employee ID: ";
        cin >> employeeId;

        cout << "Enter department: ";
        cin >> department;

        cout << "Enter salary: ";
        cin >> salary;
    }

    void display() {
        cout << "\n--- Employment Details ---" << endl;
        cout << "Employee ID: " << employeeId << endl;
        cout << "Department: " << department << endl;
        cout << "Salary: " << salary << endl;
    }
};

// Derived class using multiple inheritance
class TeachingAssistant : public Student, public Employee {
public:
    void input() {
        Student::input();
        Employee::input();
    }

    void display() {
        Student::display();
        Employee::display();
    }
};

int main() {
    TeachingAssistant ta;

    cout << "Enter Teaching Assistant Details\n";
    ta.input();

    cout << "\nComplete Teaching Assistant Record";
    ta.display();
    static_cast<Student&>(ta).input();
    static_cast<Employee&>(ta).input();
    Student* s = &ta;
    Employee* e = &ta;

    return 0;
}