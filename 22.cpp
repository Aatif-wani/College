#include <iostream>
#include <string>
using namespace std;
class Complex{
    float real;
    float imag;

public:
Complex(int r = 0, int i =0): real(r),imag(i){}
friend Complex add(const Complex& c1 , const Complex& c2);
void dispay(){
    cout <<real<<"+"
}

};
Complex add(){
    Complex temp;
    temp.real = c1.real + c2.real;
    temp.imag = c1.imag + c2.imag;
    return temp;

}