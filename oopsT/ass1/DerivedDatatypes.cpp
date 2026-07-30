#include <iostream>
using namespace std;

// DERIVED DATA TYPES: built from basic types (array, pointer, reference, function)

int main() {
    int a = 5;

    // ARRAY - collection of same-type values stored contiguously
    int arr[5] = {1, 2, 3, 4, 5};
    cout << "Array: ";
    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // POINTER - stores the memory address of another variable
    int *ptr = &a;
    cout << "Pointer ptr points to value: " << *ptr << endl;   // dereference to get value
    cout << "Address stored in ptr: " << ptr << endl;

    // REFERENCE - an alias (another name) for an existing variable
    int &ref = a;
    ref = 99;   // changes 'a' too, since ref IS a (same memory)
    cout << "After ref = 99, a = " << a << endl;

    return 0;
}