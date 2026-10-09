#include<iostream>
using namespace std;
void fibonacii(int *);
int a,b;

int main(){
     cout<<"enter number"<<endl;
     cin>>a;
    fibonacii(&a);
    
}
void fibonacii(int *x)
{
    int a =0;
     int b =1;
    for (int i =0; i< *x; i++){
        cout<<a<<" ";

    
        int next = a + b;
        a = b;
        b = next;
                
    }
}
 