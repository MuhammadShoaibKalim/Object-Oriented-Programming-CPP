/*
Consider an ATM where you can perform following function 🙂
1- Check Balance
2- Cash withdraw
3- Cash Deposit
4- Exit
*/



#include <iostream>
#include <string>
using namespace std;

class ATM {
private:
    double balance;
    string passkey;
public:
    // Constructor to initialize the ATM with a given balance and passkey
    ATM(double bal, string key) : balance(bal), passkey(key) {}

    // Function to get the current balance
    double get_balance() const {
        return balance;
    }

    // Function to deposit an amount into the ATM
    void deposit(double amount) {
        balance += amount;
        cout << "You have successfully deposited amount!" << endl;
    }

    // Function to withdraw an amount from the ATM
    void withdraw(double amount) {
        if (amount > balance) {
            cout << "Insufficient Balance" << endl;
        } else {
            balance -= amount;
            cout << "Amount withdrawn successfully." << endl;
        }
    }

    // Function to transfer an amount from one ATM to another
    void transfer(ATM &toAccount, double amount) {
        string enteredPasskey;
        cout << "Enter your passkey: ";
        cin >> enteredPasskey;

        if (enteredPasskey == passkey) {
            if (amount > balance) {
                cout << "Insufficient Balance" << endl;
            } else {
                balance -= amount;
                toAccount.deposit(amount);
                cout << "Amount transferred successfully." << endl;
            }
        } else {
            cout << "Invalid passkey. Transfer aborted." << endl;
        }
    }
};

int main() {
    system("clear"); // Use "cls" for Windows

    // Create an object of ATM class with balance and passkey
    ATM MyATM(12000, "1234");
    ATM ReceiverATM(5000, "5678"); // Another account for transfer

    int choice;
    do {
        cout << "\nATM Menu:\n";
        cout << "1. Check Balance\n";
        cout << "2. Cash Withdraw\n";
        cout << "3. Cash Deposit\n";
        cout << "4. Cash Transfer\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Your current balance is: $" << MyATM.get_balance() << endl;
                break;
            case 2: {
                double withdrawal_amount;
                cout << "Enter the amount to withdraw: ";
                cin >> withdrawal_amount;
                MyATM.withdraw(withdrawal_amount);
                break;
            }
            case 3: {
                double deposit_amount;
                cout << "Enter the amount to deposit: ";
                cin >> deposit_amount;
                MyATM.deposit(deposit_amount);
                break;
            }
            case 4: {
                double transfer_amount;
                cout << "Enter the amount to transfer: ";
                cin >> transfer_amount;
                MyATM.transfer(ReceiverATM, transfer_amount);
                cout << "Transferred to receiver account." << endl;
                cout << "Receiver account balance is: $" << ReceiverATM.get_balance() << endl;
                break;
            }
            case 5:
                cout << "Thank you for using the ATM. Goodbye!" << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }

        if (choice != 5) {
            cout << "Press Enter to continue...";
            cin.ignore();
            cin.get();
            system("cls"); // Clear screen (use "cls" on Windows)
        }
    } while (choice != 5);

    return 0;
}
