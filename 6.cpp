#include<iostream>
#include <string>
using namespace std;
class Person{
    protected:
    string name;
    public:
    void input(){
        cin>>name;
    }
};
class Student : public Person {
    public:
    void display(){
        cout<<name<<endl;
    }
};
int main(){
    Student p;
    cout<<"Enter name: ";
    p.input();
    cout<<"Name is: ";
    p.display();
}