#include <iostream>
using namespace std;

class Bank {
private:
    string accountHolder;
    string accountNumber;
    double balance;
    static double totalDeposits; 

public:

    Bank(string accHolder, string accNumber, double initialBalance) 
        : accountHolder(accHolder), accountNumber(accNumber), balance(initialBalance) {
        totalDeposits += initialBalance;
    }


    static double getTotalDeposits() {
        return totalDeposits;
    }


    void deposit(double amount) {
        balance += amount;
        totalDeposits += amount;
    }


    void displayDetails() const {
        cout << "Account Holder: " << accountHolder << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Balance: " << balance << endl;
    }
};


double Bank::totalDeposits = 0;

int main() {
    Bank account1("John Doe", "123456789", 1000.0);
    Bank account2("Jane Smith", "987654321", 2000.0);

    account1.deposit(500.0);
    account2.deposit(1500.0);

    account1.displayDetails();
    account2.displayDetails();

    cout << "Total Deposits in the Bank: " << Bank::getTotalDeposits() << endl;

    return 0;
}
