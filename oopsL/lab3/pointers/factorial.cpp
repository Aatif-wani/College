#include<iostream>
using namespace std;
int factorial( int *);
int main(){
    int a;
    cout<<"Enter the number:";
    cin >>a;
    int b = factorial(&a);
    cout<<"The Factorial Of the Number "<<a<<"is:"<<b <<endl;
}
int factorial(int *x){
    if(*x == 0 || *x ==1){
        return 1;
    }
    else{
        int temp = *x -1;
        return *x * factorial(&temp);
    }
}
