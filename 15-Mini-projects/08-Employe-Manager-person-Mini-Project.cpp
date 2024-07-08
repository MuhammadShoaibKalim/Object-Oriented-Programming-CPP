/*
Suppose there are two classes A and B. You want to 
derive a third class C from these( A and B ) Two 
classes which concept is required for this and you 
will implement it through a program.

*/

#include <iostream>
#include <string>
using namespace std;

class Person {
protected:
    string name;
    int age;
public:
    void get_person_info() {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter age: ";
        cin >> age;
    }
    
    void show_person_info() const {
        cout << "Name: " << name << "\nAge: " << age << endl;
    }
};

class Employee {
protected:
    int employee_id;
    double salary;
public:
    void get_employee_info() {
        cout << "Enter employee ID: ";
        cin >> employee_id;
        cout << "Enter salary: ";
        cin >> salary;
    }
    
    void show_employee_info() const {
        cout << "Employee ID: " << employee_id << "\nSalary: " << salary << endl;
    }
};

class Manager : public Person, public Employee {
public:
    void get_manager_info() {
        get_person_info();
        get_employee_info();
    }
    
    void show_manager_info() const {
        show_person_info();
        show_employee_info();
    }
};

int main() {
    Manager mgr;
    mgr.get_manager_info();
    cout << "\nManager Information:\n";
    mgr.show_manager_info();
    return 0;
}
