#include <iostream>
using namespace std;
class Bank{
        private:
            string accountNumber;
            string accountHolder;
            double balance;
        public:
            string set_accountNumber(){
                     cout << "Enter the account number: ";
                     cin >> accountNumber;
            }
            string get_accountNumber(){
                     return accountNumber;
            }
             string set_accountHolder(){
                    cout << "Enter the account holder name: ";
                    cin >> accountHolder;
                }   
            string get_accountHolder(){
                   return accountHolder;
            }   
            
            double set_balance(){
                 cout << "Enter the balance: ";
                 cin >> balance;
            }  
            double get_balance(){
               return balance;
            }
           
            void deposit(double amount){
                    balance = balance + amount;
            }
            void with_draw(double amount){
                if(amount >balance)
                    cout << "Insufficient balance" << endl;
                else
                    balance = balance - amount;
            }  

          void display_all_details(){
                  cout << "Account Number: " << accountNumber << endl;
                  cout << "Account Holder: " << accountHolder << endl;
                  cout << "Balance: $" << balance << endl;
          }
};
int main() {
  
     Bank account;
  
     account.set_accountHolder();
     account.set_accountNumber();
     account.set_balance();

     account.get_accountHolder();
     account.get_accountNumber();
     account.get_balance();
     
     
     cout << endl;

       account.deposit(1200);
       account.with_draw(500);

       account.display_all_details();




    return 0;
}