// 30th july
#include<iostream>
using namespace std;

int square(int);
int main(){
    int number;
    cout <<"Enter number:";
    cin >> number;
    int c = square(number);
    cout<<"The Square of the number is: "<< c << endl ;
    return 0;
 
 }
int square(int number){
    return number*number;
     
}

