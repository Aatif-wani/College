#include<iostream>
using namespace std;


int Largestof2(int *a , int *b){
    if(*a > *b){
        return *a;
    }
    else{
        return *b;
    }
}
int main(){
    int x ,y ;
    cout<<"Enter Two Numbers:";
    cin >> x >> y;
    int result = Largestof2(&x,&y);
    cout<<"The Largest Of Two numbers is: "<<result<<endl;
}