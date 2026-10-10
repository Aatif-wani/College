#include<iostream>
#include<string>
using namespace std;
class Resource{
    int number;
    public:
    Resource(int n){
        number = n;
        cout<<"Recource Acquired "<<n<<endl;
    }
    ~Resource(){
        cout<<"Resource Relesed "<<number<<endl;

    }

};
class Book{
    public:
    string title;
    string author;
    double price;
    Book(){
        title = "Thousand splended sons";
        author = "Khalid hussain";
        price = 499.990;
    }
    void display(){
        cout<<title<<endl<<author<<endl<<price<<endl;
    }
    Book(const Book& b){
        title = b.title;
        author = b.author;
        price= b.price;

    }

};

class Point{
    int x,y;
    public:
    Point(int a,int b){
        x = a;
        y = b;
    }
    void display(){
        cout<<x<<" , "<<y<<endl;
    }
    Point(const Point& p){
        this->x = p.x;
        y= p.y;
    }
    

};
int main(){
    Resource r1(1);
    Resource r2(2);
    Book b1;
    b1.display();
    Book b2(b1);
    b2.display();

    Point p1(10,20);
    p1.display();
    Point p2(p1);
    p2.display();
}