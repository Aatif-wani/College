 #include<iostream>
 #include<string>
 using namespace std;
class Circle{
    public:
    double area;
    const double pie = 3.141;
    double radius;
    Circle(){
          cout << "Enter radius: ";
         cin >> radius;
      area = 3.141 * radius * radius;
          cout<<"Area is :"<<area<<endl;

          

     }
};
int main(){
    Circle c1;

    
     
    
}
