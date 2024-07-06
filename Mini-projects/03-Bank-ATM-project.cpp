#include <iostream>
using namespace std;

class Bank {
private:
    string account_holder;
    string account_number;
    double balance;
    string type;

public:
    // Default constructor
    Bank() : account_holder(""), account_number(""), balance(0.0), type("") {}

    // Parameterized constructor
    Bank(string a_h, string a_n, double b, string type_a) 
        : account_holder(a_h), account_number(a_n), balance(b), type(type_a) {}

    // Method to get account details from user
    void input_details() {
        cout << "Enter the account holder name: ";
        cin >> account_holder;
        cout << "Enter the account number: ";
        cin >> account_number;
        cout << "Enter the balance: ";
        cin >> balance;
        cout << "Enter the account type: ";
        cin >> type;
    }

    void deposit(double amount) {
        balance += amount;
        cout << "Amount deposited successfully." << endl;
    }

    void withdraw(double amount) {
        if (balance < amount)
            cout << "Insufficient balance." << endl;
        else {
            balance -= amount;
            cout << "Amount withdrawn successfully." << endl;
        }
    }

    void show_details() const {
        cout << "The account holder name: " << account_holder << endl;
        cout << "The account number: " << account_number << endl;
        cout << "The account type: " << type << endl;
        cout << "The balance: " << balance << endl;
    }
};

int main() {
    Bank bank1;

    int choice;
    do {
        cout << "----------------Main Menu--------------" << endl << endl;
        cout << "1. Input details" << endl;
        cout << "2. Deposit" << endl;
        cout << "3. Withdraw" << endl;
        cout << "4. Show details" << endl;
        cout << "5. Exit" << endl<<endl;
        cout << "Enter your choice : ";
        cin >> choice;

        switch (choice) {
        case 1:
            bank1.input_details();
            break;
        case 2:
            double deposit_amount;
            cout << "Enter the amount you want to deposit: ";
            cin >> deposit_amount;
            bank1.deposit(deposit_amount);
            break;
        case 3:
            double withdraw_amount;
            cout << "Enter the amount you want to withdraw: ";
            cin >> withdraw_amount;
            bank1.withdraw(withdraw_amount);
            break;
        case 4:
            bank1.show_details();
            break;
        case 5:
            cout << "Thank you for banking with us." << endl<<endl;
            return 0;
        default:
            cout << "Invalid choice." << endl<<endl<<endl;
            break;
        }
        system("pause");
        system("cls");  
    } while (true);

    return 0;
}
