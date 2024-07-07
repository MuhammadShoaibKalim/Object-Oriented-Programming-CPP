/*
Consider an ATM where you can perform following function 🙂
1- Check Balance
2- Cash withdraw
3- Cash Deposit
4- Exit
*/

#include <iostream>
#include<iomanip>
using namespace std;
class ATM{
     private:
       double balance;
       string pin;
     public:
       ATM (double bal) {
         balance=bal;
       };
      double get_balance()
      {
        return balance;
      } 

      double deposit(double amount)
       {
          balance += amount;
          cout<<" You have successfully deposited amount!!";
       }
       void withdraw(double amount) {
        if (amount > balance) {
            cout << "Insufficient Balance" << endl;
        } else {
            balance -= amount;
            cout << "Amount withdrawn successfully." << endl;
        }
    }
       void transfer( ATM &toATM, double amount)
       {
             string enteredPasskey;
              cout << "Enter your passkey: ";
              cin >> enteredPasskey;
             if(enteredPasskey==pin)
             {
                if (amount > balance) {
                    cout << "Insufficient Balance" << endl;
                } else {
                    balance -= amount;
                    toATM.deposit(amount);
                    cout << "Amount transferred successfully." << endl;
                }
             }
             else
             {
                cout<<" You entered wrong key...";
             }

       }
       
};
int main() {
              system("pause");
              ATM MyATM(12000);
         
              
          int choice;
          do
          {
            cout << "\nATM Menu:\n";
            cout << "1. Check Balance\n";
            cout << "2. Cash Withdraw\n";
            cout << "3. Cash Deposit\n";
            cout<<  "4. Cash Transfer\n";
            cout << "5. Exit\n";
            cout << "Enter your choice :";
            cin >> choice;

             switch (choice)
          {
              case 1:
                // double my_balance;
                cout << "Your current balance is :";
                cout << MyATM.get_balance() << "$"<< endl;
                break;
              case 2:
                double withdrawal_amount;
                cout<<" Enter the amount to withdrawal :";
                cin>>withdrawal_amount;
                MyATM.withdraw(withdrawal_amount);
              break;
              case 3:
                 double deposit_amount;
                 cout<<" Enter the amount to deposit :";
                 cin>>deposit_amount;
                 MyATM.deposit(deposit_amount);
               break;
               case 4:
                    
         system("pause");
         system("cls");
          }
          } while (true);
    return 0;
}