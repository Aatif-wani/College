#include <iostream>
#include <string>
using namespace std;

string msg();

int main(){
    string name = msg();       // ask first, store the answer
    cout << "Hello, " << name << endl;  // then print
    return 0;
}

string msg(){
    string name;
    cout << "What is Your Name: ";
    cin >> name;
    return name;
}