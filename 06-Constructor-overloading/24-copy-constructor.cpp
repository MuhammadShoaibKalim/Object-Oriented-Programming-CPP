#include <iostream>
using namespace std;

class Person {
public:
    string name;
    int age;

public:
 
    Person() : name("Unknown person"), age(0) {}

    Person(string n) : name(n), age(0) {}

    Person(string n, int a) : name(n), age(a) {}

    void get_data() {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter age: ";
        cin >> age;
    }

    void print() const {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

int main() {
    system("cls"); 

   
    Person person0;
    Person person1("Ali");
    Person person2("Ahmad", 678);

    
    person1.print();
    person2.print();


    Person person4 ;
    person4 = person2;
    person4.print(); 
    
    system("pause"); 

    
    system("cls"); 
    cout << "If you want to enter data by user:" << endl;
    cout << "1. Yes" << endl;
    cout << "2. Exit" << endl;
    cout << "Enter your choice: ";

    int choice;
    cin >> choice;

    if (choice == 1) {
        system("cls"); 
        Person person3;
        person3.get_data();
        system("cls"); 
        cout << "----- Here entered data by user ------" << endl;
        person3.print();
        system("pause"); 
    } else if (choice == 2) {
        exit(0);
    } else {
        cout << "You entered a wrong choice" << endl;
        system("pause"); 
    }
  

    
   
        



     
    return 0;
}
