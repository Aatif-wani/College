#include<iostream>
#include<string>
using namespace std;
class Student{
    protected:
    int marks[2];
    public:
    int roll_no;
    string name;
    Student(int r, string s){
        roll_no = r;
        name =s;
    }
    void getinfo(){
        for (int i = 1; i<4;i++){
            cout<<"Enter marks obtained in "<<i<<" subjects:"<<endl;
            cin>>marks[i];
        }
    }
};
class Result : public Student {
     int total = 0;
    public:
    Result(int r , string s) : Student (r,s){}
    void total_Marks(){
        cout<<"Total marks obtained are:";
        for(int i = 1; i<4;i++){
            total += marks[i];
    }
    cout<<total<<endl;
     }
    void percentage(){
        cout<<"percentage:"<<(total/3)<<endl;
    }
    void Grade(){
        for (int i = 1; i<4;i++){
             if(marks[i] < 60){
                cout<<"FAIL in subject:"<<i<<endl;
             }
             else{
                cout<<"PASS in subject:"<<i<<endl;
             }
    }
        
    }

};
int main(){
    string n;
    int r;
    cout<<"Enter the name and roll no of the Student:";
    cin>>n>>r;
    Result g(r,n);
    g.getinfo();
    g.total_Marks();
    g.percentage();
    g.Grade();
}