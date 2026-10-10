#include<iostream>
 #include<string>
 using namespace std;
 class Vehicle{
    public:
    int number;
    Vehicle(){
      cout<<"Vehicle constructor\n";

    }

 };
 class Car : public Vehicle{
    public:
    Car(){
      number = 1;
      cout<<"Car constructor no."<<number<<endl;
    }
 };
 int main(){
   Car s;

 }