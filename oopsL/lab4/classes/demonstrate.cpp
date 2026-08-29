#include <iostream>
using namespace std;

class Demo {
private:
    int privateVar;
protected:
    int protectedVar;
public:
    int publicVar;

    void input() {
        cout << "Enter private, protected, and public values: ";
        cin >> privateVar >> protectedVar >> publicVar;
    }
    void showPrivate() {          // private accessed only inside class
        cout << "Private (via member function): " << privateVar << endl;
    }
};

class Derived : public Demo {
public:
    void showProtected() {        // protected accessible in derived class
        cout << "Protected (via derived class): " << protectedVar << endl;
    }
};

int main() {
    Derived d;
    d.input();
    d.showPrivate();
    d.showProtected();
    cout << "Public (directly from main): " << d.publicVar << endl;
    return 0;
} 