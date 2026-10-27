#include <iostream>
#include <string>
using namespace std;
class Shape{
    protected:
    float length,breadth,height;
    public:
    Shape(float l,float b,float h):length(l),breadth(b),height(h){}



};
class Rectangle: public Shape{
    public:
    Rectangle(float l,float b,float h):Shape(l,b,h) {}

    float area(){
        return length * breadth; 
        
    }
};
class Cuboid :public Rectangle{
    public:
    Cuboid(float l,float b,float h):Rectangle(l,b,h){
    }
    float volume(){
        return area() * height;

    }

};
int main(){
    float l , b ,h;
    cout << "Enter length, breadth and height: ";
    cin >> l >> b >> h;
    Cuboid c(l,b,h);
    cout << "Area of Rectangle: " << c.area() << endl;
    cout << "Volume of Cuboid: " << c.volume() << endl;

    
}