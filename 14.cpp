#include<iostream>
#include<string>
using namespace std;
class Date{
    public:
    int day;
    int month;
    int year;
    Date(int d,int m,int y){
        day = d;
        month = m;
        year = y;
    }
    void nextDate(){
        int daysInMonth;

        if(month == 2){
            bool leap = (year % 400 == 0)||( year % 100 !=0 && year % 4 ==0 );
            daysInMonth = leap ? 29 : 28; 
        }
        else if(month == 4 || month == 6 || month == 9 || month == 11){
            daysInMonth = 30;
            
        }
        else{
            daysInMonth = 31;
        }
        if(day < daysInMonth){
            day++;
        }
        else{
            day =1;

            if(month == 12){
                month =1;
                year++;
            }
            else{
                month++;
            }
        }
    }
        
   Date& operator++(){
    nextDate();
    return *this;

   }
   Date operator++(int){
    Date old = *this;
    nextDate();
    return old;

   }
   void display(){
    cout<<day<<"/"<<month<<"/"<<year<<endl;
   }
    
   };
   int main(){
    Date d(15,8,2026);
     d.display();

    Date d1 = ++d;
    d1.display();

   }

