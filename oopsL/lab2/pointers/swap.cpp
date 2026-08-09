#include <iostream>
using namespace std;

// Pointer version of swap: pass ADDRESSES, not values
void swapUsingPointers(int *a, int *b);

int main(){
    int x, y;
    cout << "Enter two numbers: ";
    cin >> x >> y;

    cout << "Before swap: x = " << x << ", y = " << y << endl;
    swapUsingPointers(&x, &y);
    cout << "After swap:  x = " << x << ", y = " << y << endl;

    return 0;
}

void swapUsingPointers(int *a, int *b){
 
  int temp = *a;  // store value pointed to by a
    *a = *b;        // change the actual variable a points to
    *b = temp;       // change the actual variable b points to
}
 