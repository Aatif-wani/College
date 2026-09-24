#include <iostream>
#include <string>
using namespace std;

class Employee {
    int id;
    string name;
    float salary;

public:
    // Parameterized constructor
    Employee(int i, string n, float s) {
        id = i;
        name = n;
        salary = s;
    }

    // User-defined copy constructor
    Employee(const Employee &e) {
        cout << "Copy constructor called" << endl;
        id = e.id;
        name = e.name;
        salary = e.salary;
    }

    void display() {
        cout << "ID: " << id
             << ", Name: " << name
             << ", Salary: " << salary << endl;
    }
};

int main() {
    Employee e1(101, "Amit", 45000);
    Employee e2(e1);   // copy constructor is called

    cout << "\nOriginal employee:" << endl;
    e1.display();

    cout << "Copied employee:" << endl;
    e2.display();

    return 0;
}