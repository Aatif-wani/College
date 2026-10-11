#include<iostream>
#include<string>
using namespace std;
class Complex{
    public:
        float real,imag;
        Complex(float r , float i){
            real = r;
            imag = i;
        }
        Complex operator+(const Complex& n){
            Complex temp(0,0);
            temp.real = real + n.real;
            temp.imag = imag + n.imag;
            return temp;
        }
        void display() {
        cout << real << " + " << imag << "i" << endl;
    }
};
         
int main(){
    float r, i;

    cout << "Enter real and imaginary parts of first number: ";
    cin >> r >> i;
    Complex c1(r, i);

    cout << "Enter real and imaginary parts of second number: ";
    cin >> r >> i;
    Complex c2(r, i);

    Complex c3 = c1 + c2;

    cout << "Sum of two complex numbers: ";
    c3.display();
 
}
