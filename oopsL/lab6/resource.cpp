#include <iostream>
using namespace std;

class Resource {
public:
    // Constructor
    Resource() {
        cout << "Resource acquired" << endl;
    }

    // Destructor
    ~Resource() {
        cout << "Resource released" << endl;
    }
};

int main() {
    cout << "Entering main..." << endl;

    {
        Resource r;   // constructor is called here
        cout << "Using the resource..." << endl;
    }   // r goes out of scope here, destructor is called

    cout << "Leaving main..." << endl;

    return 0;
}