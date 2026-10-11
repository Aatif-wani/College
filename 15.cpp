#include<iostream>
#include<string>
using namespace std;
 
    class Number{

    public:
    int a;
    int b;
    Number(int c, int d){
        a = c;
        b = d;
    }
    Number operator+() const{
         Number temp(0,0);
         temp.a = +a;
         temp.b = +b;
         return temp;
    }
    Number operator-() const{
         Number temp(0,0);
         temp.a = -a;
         temp.b = -b;
         return temp;
    }
    bool operator!() const{
        return (a == 10 && b == 20);
    }
    void display(){
        cout<<"a = "<<a<<endl;
        cout<<"b ="<<b<<endl;
    }
};
    int main(){
        Number n1(10,20);

        Number n3 = +n1;
        Number n4 = -n1;
        n3.display();
        n4.display();
        if (!n1){
            cout<<"a =10 && b ==20";
        }



}