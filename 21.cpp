#include <iostream>
#include <string>
using namespace std;
class Person{
    protected:
    string name;
    public:
    Person(string n): name(n){}

};
class Student : virtual public Person{
    protected:
    int roll_no;
    string course;
    public:
    Student (int r,string c) : Person(),roll_no(r),course(c){}


};
class Employee: virtual public Person{
    protected:
    int EmployeeID;
    string department;
    public:
    Employee(int e,string d):Person(),EmployeeID(e),department(d){}

};
 class TeachingAssistant :public Student,public Employee{
    public:
    TeachingAssistant(string n,int r,string c,int e,string d):Person(n),Student(r,c),Employee(e,d){}
    void display(){
        cout<<name<<roll_no<<course<<EmployeeID<<department;
    }

 };
 int main(){
    TeachingAssistant ta();

    ta.display();

 }