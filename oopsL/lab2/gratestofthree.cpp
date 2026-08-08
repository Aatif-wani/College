#include <iostream>
using namespace std;

// Function takes three numbers and returns the greatest
int greatest(int a, int b, int c);

int main(){
    int x, y, z;
    cout << "Enter three numbers: ";
    cin >> x >> y >> z;

    cout << "Greatest number = " << greatest(x, y, z) << endl;

    return 0;
}

int greatest(int a, int b, int c){
    int max = a;
    if (b > max) max = b;
    if (c > max) max = c;
    return max;
}