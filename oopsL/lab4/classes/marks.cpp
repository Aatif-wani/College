#include <iostream>
using namespace std;

class Student {
private:
    int marks[5];
    float percentage;
public:
    void input() {
        cout << "Enter marks of 5 subjects (out of 100 each): ";
        for (int i = 0; i < 5; i++)
            cin >> marks[i];
    }
    void calculate() {
        int total = 0;
        for (int i = 0; i < 5; i++)
            total += marks[i];
        percentage = (float)total / 5;
    }
    void display() {
        cout << "Percentage = " << percentage << "%" << endl;
    }
};

int main() {
    Student s;
    s.input();
    s.calculate();
    s.display();
    return 0;
}