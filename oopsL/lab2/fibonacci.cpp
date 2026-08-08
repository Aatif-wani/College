#include <iostream>
using namespace std;

// Function to print Fibonacci terms up to "limit"
void printFibonacci(int limit);

int main(){
    int limit;
    cout << "Print Fibonacci sequence up to: ";
    cin >> limit;

    printFibonacci(limit);

    return 0;
}

void printFibonacci(int limit){
    int a = 0, b = 1;

    cout << "Fibonacci sequence: ";
    while (a <= limit){
        cout << a << " ";
        int next = a + b;
        a = b;
        b = next;
    }
    cout << endl;
}