#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " elements: ";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int *p = arr;
    int sum = 0;
    for(int i = 0; i < n; i++){
        sum += *(p + i);
    }
    float avg = (float)sum / n;

    cout << "Sum = " << sum << endl;
    cout << "Average = " << avg << endl;
    return 0;
}