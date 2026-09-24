#include<iostream>
#include <string>
using namespace std;

class Employee{
    int employee_id;
     string name;
     float salary;
     public:
     void show (int employee_id,string name,float salary){
        this->employee_id = employee_id;
        this->salary = salary;
        this->name = name;
        cout<<employee_id<<endl<<salary<<endl<<name<<endl;
     }
     
};
int main(){
    Employee e;
    e.show(101,"Aatif",1400.7);
}