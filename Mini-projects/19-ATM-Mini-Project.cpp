/*
Consider an ATM where you can perform following function 🙂
1- Check Balance
2- Cash withdraw
3- Cash Deposit
4- Exit
*/

#include <iostream>
using namespace std;
class ATM{
     private:
       double balance;
     public:
       ATM (double b):balance(b) {
        double b=balance;
       };
      double get_balance()
      {
        return balance;
      } 

      void deposit()
       {
        
       }
       
};
int main() {
   
    
    return 0;
}