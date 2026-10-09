// Online C++ compiler (editor)
// Write and run C++ online using this editor.

#include <iostream>
using namespace std;
    // Write C++ code here
    class BankAccount{
        float balance = 1000;
        public:
        float deposit(float amount){
            balance += amount;
            return balance;
        }
        float withdraw(float minus){
            if(balance< minus){
                cout<<"insufficient balance"<<endl;
                
            }
            else{
                balance -= minus;
                 cout << "Withdrawal successful" << endl;
                
            }
            return balance;
        }
        void display(){
            cout<<"Balance of your  account is:"<<balance<<endl;
        }
        
    };
    int main(){
        BankAccount s;
        int choice;
        float amount,minus;
        cout<<"type 0 to withdraw "<< endl<<"type 1 to deposit "<<endl;
        cin>>choice;
        cout<<"Enter the amount:"<<endl;
        cin>>amount;
        if(choice){
            s.deposit(amount);
        }
        else{
            s.withdraw(amount);
        }
        s.display();

}