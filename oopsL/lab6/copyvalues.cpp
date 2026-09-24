#include <iostream>
#include <string>
using namespace std;

class Book {
    string title;
    string author;
    float price;

public:
    // Parameterized constructor
    Book(string t, string a, float p) {
        title = t;
        author = a;
        price = p;
    }

    // Copy constructor
    Book(const Book &b) {
        title = b.title;
        author = b.author;
        price = b.price;
    }

    void display() {
        cout << "Title: " << title
             << ", Author: " << author
             << ", Price: " << price << endl;
    }
};

int main() {
    Book b1("The Alchemist", "Paulo Coelho", 350.0);
    Book b2(b1);   // copy constructor is called

    cout << "Original book:" << endl;
    b1.display();

    cout << "Copied book:" << endl;
    b2.display();

    return 0;
}