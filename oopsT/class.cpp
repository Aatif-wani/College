#include <iostream>
#include <string>
using namespace std;

class Book{
 public:
    string title;
    string author;
    int price;

        //Parameterized constructor
        Book (string t,string a,int p){
        title = t ;
        author = a ;
        price = p ;
        }
        Book (string t){
            title = t;
        }
        Book (int p){
            price = p;
        }
        
        //Copy Constructor
        
        Book(const Book &oldBook) {
            title = oldBook.title;
            author = oldBook.author;
            price = oldBook.price;
            }
            //Default constructor
            Book(){

            }
        

        
        void display(){
        cout << "title: " << title << endl;
        cout << "author: " << author << endl;
        cout << "price: " << price << endl<<endl;
            }
        };
        
int main(){
    Book b1("Thusand","Me",500);
     Book b2(b1);
    Book b3("rrrrrr");
    Book b4;
     Book b5(40);

      b2.display();
    b1.display();

    b3.display();
    b4.display();
   
    b5.display();
    
    
  }