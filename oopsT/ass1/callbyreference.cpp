#include<iostream>
using namespace std;

void incr(int &);
int main(){
    int number;
    cout <<"Enter number:";
    cin >> number;
    int &b = number;
    cout << "Address of number: " << &number << endl;
    cout << "Address of b:      " << &b << endl;
    incr(b);
    cout<<"Main"<<number<< endl << b <<endl;
    return 0;
 
 }
void incr(int &x){
    cout << "Address of x:      " << &x << endl;
    ++x;
    cout<<"Function"<< x <<endl;
}