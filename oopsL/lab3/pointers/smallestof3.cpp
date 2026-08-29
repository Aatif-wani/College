#include<iostream>
using namespace std;


int smallestof3(int *a , int *b, int *c){
    if(*a > *b){
        if (*b > *c){
            return *c;  
        }
        else{
             return *b;
        }
        }
    else{
        if(*a > *c)
        {
            return *c;
        }
        else{
            return *a;
         
    }
}
}
int main(){
    int x ,y,z ;
    cout<<"Enter Three Numbers:";
    cin >> x >> y >> z;
    int result = smallestof3(&x,&y,&z);
    cout<<"The smallest of three numbers is: "<<result<<endl;
}