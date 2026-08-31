#include <iostream>
#include <string>
using namespace std;

class Student {
    public:
        string name;
        int age;
        int marks;
        void display(){
            cout << "Name: " << name << endl;
            cout << "Marks: " << marks << endl;
            cout << "Age: " << age << endl;
              }

};
int main(){
    Student s1,s2;
    s1.name = "Akhil";
    s1.age = 14;
    s1.marks = 90;
    s2.name = "chodwrey";
    s2.age = 18;
    s2.marks = 70;
    s1.display();
    s2.display();
}