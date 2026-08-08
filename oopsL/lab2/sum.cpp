#include <iostream>
using namespace std;

// Function  takes two arguments and RETURNS their sum
int sum(int a, int b);

int main(){
    int x, y;
    cout << "Enter two numbers: ";
    cin >> x >> y;

    int result = sum(x, y);
    cout << "Sum = " << result << endl;

    return 0;
}

int sum(int a, int b){
    return a + b;
}