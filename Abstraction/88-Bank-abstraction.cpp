#include <iostream>
using namespace std;

class BankAccount {
private:
    double balance;
public:
    void deposit(double amount) {
        balance += amount;
    }
    void withdraw(double amount) {
        if(amount <= balance) {
            balance -= amount;
        } else {
            cout << "Insufficient funds" << endl;
        }
    }
    double get_balance() const {
        return balance;
    }
};

int main() {
    BankAccount account;
    account.deposit(1000);
    account.withdraw(500);
    cout << "Balance: " << account.get_balance() << endl;
    return 0;
}
