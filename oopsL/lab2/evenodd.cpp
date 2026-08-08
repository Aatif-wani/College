#include <iostream>
using namespace std;

// Function returns TRUE if number is even
bool isEven(int n);

int main(){
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (isEven(num)){
        cout << num << " is Even." << endl;
    } else {
        cout << num << " is Odd." << endl;
    }

    return 0;
}

bool isEven(int n){
    return (n % 2 == 0);
}