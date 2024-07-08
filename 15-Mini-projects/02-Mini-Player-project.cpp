#include <iostream>
#include <string>
using namespace std;

class Player {
private:
    string name;
    int age;
    string team;

public:
    Player() : name(""), age(0), team("") {}

void input_details() {
    cin.ignore(); 
    cout << "Enter name: ";
    getline(cin, name);
    cout << "Enter age: ";
    cin >> age;
    cout << "Enter team: ";
    cin.ignore(); 
    getline(cin, team);
}



    void display_details() {
        if (name.empty() || team.empty() || age == 0) {
            cout << "No details available" << endl;
            return;
        }

        cout << "------------------- Player Details ----------------------" << endl << endl;
        cout << " Name: " << name << endl;
        cout << " Age: " << age << endl;
        cout << " Team: " << team << endl;
        system("pause"); 
    }

    void update_details() {
        cout << "------------------- Here Update Player Details ----------------------" << endl << endl;
        cout << "Enter name of player: ";
        cin >> name;
        cout << "Enter age of player: ";
        cin >> age;
        cout << "Enter team of player: ";
        cin >> team;
    }
};

int main() {
    Player p1;

    int choice;
    do {
        system("cls"); 
        cout << "------------------- Welcome to Team Management System ----------------------" << endl << endl;
        cout << "1. Input details" << endl;
        cout << "2. Display details" << endl;
        cout << "3. Update details" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice) {
        case 1:
            p1.input_details();
            break;
        case 2:
            p1.display_details();
            break;
        case 3:
            p1.update_details();
            break;
        case 4:
            cout << "Exiting..." << endl;
            return 0;
        default:
            cout << "Invalid choice" << endl;
            break;
        }
    } while (true);

    return 0;
}
