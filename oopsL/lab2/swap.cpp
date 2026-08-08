#include <iostream>
using namespace std;

// Pass by REFERENCE (&) so the swap actually affects the original variables
void swapNumbers(int &a, int &b);

int main(){
    int x, y;
    cout << "Enter two numbers: ";
    cin >> x >> y;

    cout << "Before swap: x = " << x << ", y = " << y << endl;
    swapNumbers(x, y);
    cout << "After swap:  x = " << x << ", y = " << y << endl;

    return 0;
}

void swapNumbers(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}