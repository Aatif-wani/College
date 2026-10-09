#include<iostream>
using namespace std;
class Student{
     public:
     static int totalMarks(int a, int b , int c){
        return a + b + c;
     }
     static int DaystoHours(int a){
        return 24*a;
     }
     static int HourstoMin(int b){
        return 60 * b;
     }
     static void Leap(int c){
        if((c % 400 == 0) || (c % 4 == 0 && c % 100 != 0)){
            cout<< c <<" is a leap year"<<endl;
        }
        else{
            cout<< c <<" not a leap year"<<endl;
        }
     }

    };
    int main(){
        int totalMarks =Student :: totalMarks(40,50,80);
        cout<<"totalMarks: "<<totalMarks <<endl;
        cout<<"percentage: "<<totalMarks/3 <<endl;
        //2nd
        int a;
        cout<<"Enter the no. of days:";
        cin>>a;
        cout<<"No. of Hours in "<< a <<" days are:"<<Student :: DaystoHours(a)<<endl;
        //3rd
        int b;
        cout<<"Enter no. of hours:";
        cin>>b;
        cout<<"No. of mins in "<< b <<" hours are:"<<Student :: HourstoMin(b)<<endl;
        //4th
        int c;
        cout<<"Enter the year:"<<endl;
        cin>>c;
        Student :: Leap(c);
 
    }