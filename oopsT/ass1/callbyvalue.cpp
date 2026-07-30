#include<iostream>
using namespace std;

void incr(int);
int main(){
    int number;
    cout <<"Enter number:";
    cin >> number;
    incr(number);
    cout<<"Main"<<number<< endl ;
    return 0;
 
 }
void incr(int number){
    ++number;
    cout<<"Function"<<number<<endl;
}
