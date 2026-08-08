#include <iostream>
using namespace std;

// Same function name "add", different parameter lists = function overloading
int add(int a, int b);
double add(double a, double b);
int add(int a, int b, int c);

int main(){
    cout << "add(2, 3)       = " << add(2, 3) << endl;          // calls int version
    cout << "add(2.5, 3.5)   = " << add(2.5, 3.5) << endl;      // calls double version
    cout << "add(1, 2, 3)    = " << add(1, 2, 3) << endl;       // calls 3-argument version

    return 0;
}

int add(int a, int b){
    return a + b;
}

double add(double a, double b){
    return a + b;
}

int add(int a, int b, int c){
    return a + b + c;
}