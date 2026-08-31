#include <iostream>
#include <string>
using namespace std;

class Book {
public:
    string title;
    string author;
    int price;

    // Parameterized constructor with default parameters
    Book(string t = "Unknown", string a = "Unknown", int p = 0) {
        title = t;
        author = a;
        price = p;
    }

    // Copy constructor
    Book(const Book &oldBook) {
        title = oldBook.title;
        author = oldBook.author;
        price = oldBook.price;
    }

    void display() {
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Price: " << price << endl << endl;
    }
};

int main() {
    Book b1("Thusand", "Me", 500);  // All arguments
    Book b2("Will", "Jackson");     // Price uses default: 0
    Book b3("C++");                 // Author and price use defaults
    Book b4;                        // All three use defaults

    b1.display();
    b2.display();
    b3.display();
    b4.display();
}

// Why? Because:

// Book(string t = "Unknown", string a = "Unknown", int p = 0)

// can itself be called with zero arguments, so it effectively provides the ability to do:

// Book b4;