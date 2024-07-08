#include <iostream>
using namespace std;
class Bank{
    private:
        string account_holder;
        string account_number;
        double balance;
    public:
    Bank(string a_h, string a_n, double b) : account_holder(a_h), account_number(a_n), balance(b) {}
        void deposit(double amount){
                balance +=amount;
        }
    
        void withdraw(double amount){
               if(balance<amount)
                  cout<<" Insufficient balance. ";
                else
                   balance -=amount;
         }
       void show_details(){
                cout<<" The account number : "<<account_number<<endl;
                cout<<" The account holder : "<<account_holder<<endl;
                cout<<" The balance : "<<balance<<endl;
        
       }

};
int main() {
         string an, ah;
         double ba, d;
          

         cout<<" Enter the account holder name : ";
         cin>>ah;
         cout<<" Enter the account number : ";
         cin>>an;
         cout<<" Enter the balance : ";
         cin>>ba;
        
         cout<<" Enter the amount you want to deposit :";
         cin>>d;  

         Bank Faisal_bank(an, ah, ba);
         Faisal_bank.show_details();
         Faisal_bank.deposit(d);
         

       
    return 0;
}