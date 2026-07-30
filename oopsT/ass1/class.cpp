#include<iostream>
#include<string>
using namespace std;


class person{
    string name;
    int age;
    // public	Anyone can acess it — including code outside the class, like main()
public:
    void getdata(void);
    void setdata(void);
};
//Read person::getdata as: "the getdata function that belongs to the person class."
//:: — Scope Resolution Operator
void person :: setdata(void){
    cout << "Enter name:";
    cin >> name;
    cout << "Enter age:";
    cin >> age;

}
void person :: getdata(void){
    cout << "Your name is:"<< name <<endl;
    cout <<"Your age is:"<< age << endl;

}
int main(){
    person p;
    p.setdata();
    p.getdata();

    return 0;

}