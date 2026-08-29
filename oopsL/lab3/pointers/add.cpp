#include <iostream>
using namespace std;

// Function takes POINTERS as parameters (addresses of a and b)
int addUsingPointers(int *a, int *b);

int main(){
    int x, y;
    cout << "Enter two numbers: ";
    cin >> x >> y;

    // &x and &y give the ADDRESSES of x and y
    int result = addUsingPointers(&x, &y);
    cout << "Sum = " << result << endl;

    return 0;
}

int addUsingPointers(int *a, int *b){
    // *a and *b DEREFERENCE the pointers to get the actual values
    return *a + *b;
}