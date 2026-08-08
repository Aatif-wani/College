#include <iostream>
using namespace std;

// Function  takes two arguments and RETURNS their sum
int factorial(int a);

int main(){
     int num;
    cout << "Enter a number: ";
    cin >> num;
 
    if (num < 0){
        cout << "Factorial is not defined for negative numbers." << endl;
    } else {
        cout << num << "! = " << factorial(num) << endl;
    }
 
    return 0;
}

int factorial(int a){
    if (a==0 || a == 1){
        return 1;
    }
    return a * factorial(a - 1);
}