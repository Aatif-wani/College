#include <iostream>
using namespace std;

class Student {
private:
    int rollNo;
    string name;
public:
    void setData() {
        cout << "Enter roll number: ";
        cin >> rollNo;
        cout << "Enter name: ";
        cin >> name;
    }
    void showData() {
        cout << "Roll No: " << rollNo << ", Name: " << name << endl;
    }
};

int main() {
    Student s;
    s.setData();
    s.showData();
    return 0;
}