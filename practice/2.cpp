#include<iostream>
using namespace std;
float sum(float *x ,float *y);
float subtract(float *x,float *y);
float multiply(float *x,float *y);
float divide(float *,float *y);
void swap(float *, float *);
float smallest(float *,float *y,float *z);
float factorial(float *);
void print_array(int *,int a );
void avg(int *arr, int n);
void largest(int *arr,int n);
void reverse(int *arr,int n);
void search(int *, int);



int arr[10]={1,2,3,4,5,6,7,8,9};

int main(){
     float a, b, c;

cout << "Enter a, b and c: ";
cin >> a >> b >> c;

cout << "Sum = " << sum(&a, &b) << endl;

swap(&a, &b);
cout << "After swap: a = " << a << ", b = " << b << endl;

cout << "Subtract = " << subtract(&a, &b) << endl;
cout << "Multiply = " << multiply(&a, &b) << endl;
cout << "Divide = " << divide(&b, &a) << endl;
cout << "Factorial of c = " << factorial(&c) << endl;

print_array(arr, 9);
largest(arr, 9);
search(arr, 9);




}

float sum(float *x ,float *y){
    return *x + *y;
}
float subtract(float *x,float *y){
    return *x - *y;
}
float multiply(float *x,float *y){
    return *x * *y;
}
float divide(float *x,float *y){
    return *x / *y;
}
 void swap(float *x,float *y){
    float c;
    c = *x;
    *x = *y;
    *y = c;
}
float smallest(float *x,float *y,float *z){
    float min = *z;
    if(*y<min){
        min = *y;
    }
    if(*x < min){
        min = *x;
    }
    return min;
}
float factorial(float *z){
    float c =1;
    for(int i =1;i <= *z;i++){
        c = c * i;
      
    }
    return c;

}
void print_array(int *arr,int n){
    for(int i = 0;i<n;i++){
        cout<<*(arr + i)<<" ";
    }
    cout<<endl;
}
void avg(int *arr,int n){
    int sum = 0;
    for(int i = 0;i<n;i++){
        sum = sum + *(arr + i);
    }
    cout<<(float)sum/n<<endl;

}
void largest(int *arr,int n){
    int max = *arr;
    for(int i =0;i<n;i++){
         if(*(arr + i) > max){
            max = *(arr +i);
        }
         
    }
    cout<<max<<endl;

}
void reverse(int *arr,int n){
        for(int i =0;i<n;i++){
            int temp = *(arr + i);
            *(arr + i) = *(arr +(n- 1 -i));
            *(arr +(n-1-i))=temp;
            *(arr + i) = arr[9 - i];
            cout<<*(arr + i)<<" ";
}
}
void search(int *arr, int n){
    int number;
    cout<<"Enter Number to search";
    cin>>number;
    for(int i=0;i < n; i++){
        if(*(arr + i) == number){
            cout<<"Yes number is at "<<i<<"place"<<endl;
        }
        
    }
    
            cout<<"number not in the array";
        
}