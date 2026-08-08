#include <iostream>
using namespace std;

const double PI = 3.14159;

// Three separate functions, each taking radius and returning one value
double diameter(double radius);
double circumference(double radius);
double area(double radius);

int main(){
    double radius;
    cout << "Enter radius of circle: ";
    cin >> radius;

    cout << "Diameter      = " << diameter(radius) << endl;
    cout << "Circumference = " << circumference(radius) << endl;
    cout << "Area          = " << area(radius) << endl;

    return 0;
}

double diameter(double radius){
    return 2 * radius;
}

double circumference(double radius){
    return 2 * PI * radius;
}

double area(double radius){
    return PI * radius * radius;
}