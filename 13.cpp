#include<iostream>
#include<string>
using namespace std;

class Number {
public:
int a, b;
 
Number(int c, int d) {
    a = c;
    b = d;
}

// Overloading +
Number operator+(const Number& n) {
    Number temp(0, 0);
    temp.a = this->a + n.a;
    temp.b = this->b + n.b;
    return temp;
}

// Overloading -
Number operator-(const Number& m) {
    Number temp(0, 0);
    temp.a = this->a - m.a;
    temp.b = this->b - m.b;
    return temp;
}
 

};

int main() {
Number n1(10, 20), n2(20, 30);

Number n3 = n1 + n2;
Number n4 = n1 - n2;

cout << "----------------Addition:-----------------\n";
cout << "a = " << n3.a << endl;
cout << "b = " << n3.b << endl;

cout << "--------Subtraction---------------\n";
cout << "a = " << n4.a << endl;
cout << "b = " << n4.b << endl;
 

}
