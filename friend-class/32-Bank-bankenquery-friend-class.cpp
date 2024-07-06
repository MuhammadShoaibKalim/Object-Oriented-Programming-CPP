#include <iostream>
using namespace std;
class BankAccount{
         public:
         double balance;
         public:
          BankAccount(double b=0):balance(b){}
          void deposit(double amount)
          {
            balance+=amount;
          }
          friend class BalanceEnquery;
};
class BalanceEnquery{
    public:
    void display(const BankAccount& ba) const
    {
        cout<<" The total balance is : "<<ba.balance<<endl;
    }
};

int main() {
   
      BankAccount bal(1000);
      bal.deposit(500);

      BalanceEnquery b;
      b.display(bal);
    return 0;
}