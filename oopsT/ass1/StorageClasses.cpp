#include <iostream>
using namespace std;

// STORAGE CLASSES: control a variable's lifetime, visibility (scope), and default value

// extern - declares a variable that is defined elsewhere (often another file)
// here we declare it, then define it right after for demo purposes in one file
extern int sharedVar;
int sharedVar = 50;   // definition

void demoStorageClasses();   // function prototype


void counter() {
    static int count = 0;   // created ONCE, keeps its value forever after
    count++;
    cout << count;
}


int main() {
    cout << "sharedVar (extern): " << sharedVar << endl;

    // calling twice to show 'static' keeps its value between calls
    demoStorageClasses();
    demoStorageClasses();
    cout <<endl;

    counter();  // prints 1
    counter();  // prints 2  (count remembered!)
    counter(); // prints 3
    cout <<endl;

    return 0;
}

        
void demoStorageClasses() {
    // auto - compiler automatically deduces the type from the assigned value
    auto val = 10;   // deduced as int


     static int callCount = 0;
    callCount++;

    // register - hints to the compiler to store this in a CPU register for fast access
    // (modern compilers usually decide this on their own and may ignore the hint)
    //register int fastVar = 1;

    cout << "auto val = " << val
         << " | static callCount = " << callCount;
     //    << " | register fastVar = " << fastVar << endl;
}