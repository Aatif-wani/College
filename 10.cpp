#include<iostream>
 #include<string>
 #include <cstring>
 using namespace std;
 class Student{
    int marks;
    string id;
    public:
    char name [50];
    char course[50];
    Student(char n[],char c[],string i){
        strcpy(name,n);
        strcpy(course,c);
        marks = 70;
        id = i;
        cout<<this<<" ->  of original s constructor"<<endl;


    }
    Student(const Student& s){
        strcpy(name ,s.name);
        strcpy(course,s.course);
        marks = s.marks;
        id = "copy object" ;
        cout<<this<<endl;

    }
    ~Student(){
        cout<<id<<" is destroyed"<<endl;
    }
 };
 int main(){
    char n[50];
    char c[50];
    cout<<"Enter name:"<<endl;
    cin>>n;
    cout<<"Enter course:"<<endl;
    cin>>c;
    Student s(n,c,"original object");
    Student s1(s);
    cout << s1.name << endl;
    cout << s1.course << endl;
    cout<<"copy constructor->"<<&s1<<endl;
    cout<<"original constructor ->"<<&s<<endl;

 }