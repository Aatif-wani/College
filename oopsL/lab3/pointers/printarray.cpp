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
    cout << "Array elements: ";
    for(int i = 0; i < n; i++){
        cout << *(p + i) << " ";
    }
    return 0;
}