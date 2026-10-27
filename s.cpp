#include <iostream>
#include <string>
using namespace std;

class Employee {
private:
    int empNo;
    int id;
    string name;
    double basicSalary;

public:
    Employee(int e, int i, string n, double salary)
        : empNo(e), id(i), name(n), basicSalary(salary) {}

    double getBasicSalary() const {
        return basicSalary;
    }

    void displayEmployee() const {
        cout << "Employee Number: " << empNo << endl;
        cout << "Employee ID: " << id << endl;
        cout << "Employee Name: " << name << endl;
        cout << "Basic Salary: " << basicSalary << endl;
    }
};
class Manager : public Employee {
private:
    string department;
    double bonus;

public:
    Manager(int e, int i, string n, double salary,string dept, double b): Employee(e, i, n, salary),department(dept), bonus(b) {}

    double calculateNetSalary() const {
        return getBasicSalary() + bonus;
    }

    void display() const {
        displayEmployee();
        cout << "Department: " << department << endl;
        cout << "Bonus: " << bonus << endl;
        cout << "Net Salary: " << calculateNetSalary() << endl;
    }
};
int main() {
    int empNo, id;
    string name, department;
    double salary, bonus;

    cout << "Enter Employee Number: ";
    cin >> empNo;

    cout << "Enter Employee ID: ";
    cin >> id;

    cout << "Enter Employee Name: ";
    cin >> name;

    cout << "Enter Basic Salary: ";
    cin >> salary;

    cout << "Enter Department: ";
    cin >> department;

    cout << "Enter Bonus: ";
    cin >> bonus;

    Manager m(empNo, id, name, salary, department, bonus);

    cout << "\n--- Manager Details ---\n";
    m.display();

    return 0;
}

    

