#include <iostream>
#include <string>
using namespace std;

class Employee {
    int id;
    string name;
    float salary;
    string department;

public:
    // Constructor 1: Name only
    Employee(string name) {
        this->name = name;
        id = 0;
        salary = 0.0;
        department = "Not Assigned";
    }

    // Constructor 2: Name and ID
    Employee(string name, int id) {
        this->name = name;
        this->id = id;
        salary = 0.0;
        department = "Not Assigned";
    }

    // Constructor 3: Name, ID, and salary
    Employee(string name, int id, float salary) {
        this->name = name;
        this->id = id;
        this->salary = salary;
        department = "Not Assigned";
    }

    // Constructor 4: Name, ID, salary, and department
    Employee(string name, int id, float salary, string department) {
        this->name = name;
        this->id = id;
        this->salary = salary;
        this->department = department;
    }

    void display() {
        cout << "ID: " << id
             << ", Name: " << name
             << ", Salary: " << salary
             << ", Department: " << department << endl;
    }
};

int main() {
    Employee e1("Amit");
    Employee e2("Riya", 102);
    Employee e3("Karan", 103, 45000);
    Employee e4("Neha", 104, 60000, "IT");

    e1.display();
    e2.display();
    e3.display();
    e4.display();

    return 0;
}