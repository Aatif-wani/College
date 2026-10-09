#include<iostream>
using namespace std;
class Student{
    int l,b;
    int r;
    const int pi =3.141;
    public:
        void takeR(){
            cout<<"Enter length and breadth";
            cin>>l>>b;
        }
        void takeC(){
            cout<<"Enter radius";
            cin>>r;
        }
        void areaR();
        void areaC();
    };
void Student::areaR(){
    cout<<l*b;
}
void Student ::areaC(){
    cout<< pi * r * r;
}
int main(){
    Student s;
    int a = 0;
    cout<<"1.rectangle,2.Circle"<<endl;
        while(a != 1 && a != 2){

            cout<<"Select 1 or 2"<<endl;
            cin>>a;
}
       

    if(a == 1){
        s.takeR();
        s.areaR();

    }
    else{
        s.takeC();
        s.areaC();
    };

}
