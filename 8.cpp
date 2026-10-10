#include<iostream>
 #include<string>
 using namespace std;
 class Matrix{
    public:
    int rows,coloumns;
    Matrix(int r, int c){
        rows = r;
        coloumns=c;
        for(int i = 0; i<rows;i++){
            for(int j = 0; j<coloumns;j++ ){

                cout<<"# ";

            }
            cout<<endl;
        }

    }
 };
 int main(){
    int r,c;
    cout<<"Enter no. of rows and coloumns:";
        cin>>r>>c;
    Matrix m(r,c);
    
 }