#include<iostream>
 #include<string>
using namespace std;
class Employee{
    int id;
    double salary;
    string name;
    public:
    Employee(int id,double salary,string name){
        this->id = id;
        this->salary = salary;
        this->name = name;
    }
    Employee(int id){
        this->id = id;
        this->name = "Unknown";
        this->salary=0;
    }
    Employee(int id , double salary){
        this->id = id;
        this->salary = salary; 
        this->name = "Unknown";
    }
    Employee(double salary) {
    this->salary = salary;
    this->id = 0;
    this->name = "Unknown";
}
Employee(string name) {
    this->name = name;
    this->id = 0;
    this->salary = 0;
}
     
    Employee(const Employee& e ){
        this->id = e.id;
        this->salary = e.salary;
        (*this).name = e.name;
    }
    void display() {
        cout << "ID: " << id << endl;
        cout << "Name: " << name << endl;
        cout << "Salary: " << salary << endl;
        cout << "----------------\n";
    }
};
int main(){
    Employee e1(1);
    Employee e2(2,5000.50);
    Employee e3(1,3000,"Aatif");
    Employee e5(5000.908);
    Employee e6("Aatif");
    Employee e4(e1);
    cout << "\nEmployee e1:\n";
    e1.display();

    cout << "Employee e2:\n";
    e2.display();

    cout << "Employee e3:\n";
    e3.display();

    cout << "Copied employee e4:\n";
    e4.display();

    cout << "Employee e5 (salary only):\n";
   e5.display();

    cout << "Employee e6 (name only):\n";
    e6.display();

}