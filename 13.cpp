#include<iostream>
#include<string>
using namespace std;
class Number{
    public:
    int a,b;
    Number(int c,int d ){
        a = c;
        b = d;
    }
    //since n1 is calling object so this points to n1 
    Number operator+(const Number& n){
        Number temp(0,0);
        temp.a = this->a + n.a;
        temp.b = b + n.b;
        return temp;
     }

};
int main(){
    Number n1(10,20),n2(20,30);
    // n1.operator+(n2)--
    Number n3 = n1 + n2;
    cout << "a = " << n3.a << endl;
    cout << "b = " << n3.b << endl;


}