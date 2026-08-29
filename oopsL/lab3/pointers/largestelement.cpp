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
    int largest = *p;
    for(int i = 1; i < n; i++){
        if(*(p + i) > largest){
            largest = *(p + i);
        }
    }
    cout << "Largest element: " << largest;
    return 0;
}