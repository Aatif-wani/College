#include <iostream>
using namespace std;

// Each function receives addresses and returns the computed value
int subtractUsingPointers(int *a, int *b);
int multiplyUsingPointers(int *a, int *b);
double divideUsingPointers(int *a, int *b);

int main(){
    int x, y;
    cout << "Enter two numbers: ";
    cin >> x >> y;

    cout << "Subtraction = " << subtractUsingPointers(&x, &y) << endl;
    cout << "Multiplication = " << multiplyUsingPointers(&x, &y) << endl;

    if (y != 0){
        cout << "Division = " << divideUsingPointers(&x, &y) << endl;
    } else {
        cout << "Division by zero is not allowed." << endl;
    }

    return 0;
}

int subtractUsingPointers(int *a, int *b){
    return *a - *b;
}

int multiplyUsingPointers(int *a, int *b){
    return (*a) * (*b);
}

double divideUsingPointers(int *a, int *b){
    return (double)(*a) / (*b);
}