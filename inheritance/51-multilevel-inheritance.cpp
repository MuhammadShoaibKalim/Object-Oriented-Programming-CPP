#include <iostream>
#include <string>  // Include <string> header for using string

using namespace std;

class Person {
public:
    int age;
    string name;

    Person(int a, const string& n) : age(a), name(n) {
        cout << "Person constructor is called." << endl;
    }

    void show_person_data() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

class Employee : public Person {
public:
    int emp_id;
    string designation;

    Employee(int a, const string& n, int id, const string& des)
        : Person(a, n), emp_id(id), designation(des) {
        cout << "Employee constructor is called." << endl;
    }

    void show_employee_data() {
        cout << "Name: " << name << ", Age: " << age << ", Employee ID: " << emp_id << ", Designation: " << designation << endl;
    }
};

class Manager : public Employee {
public:
    string department;

    Manager(int a, const string& n, int id, const string& des, const string& dep)
        : Employee(a, n, id, des), department(dep) {
        cout << "Manager constructor is called." << endl;
    }

    void show_manager_data() {
        cout << "Name: " << name << ", Age: " << age << ", Employee ID: " << emp_id << ", Designation: " << designation << ", Department: " << department << endl;
    }
};

int main() {
    Manager mngr(35, "Alice", 1234, "IT Manager", "IT");
    mngr.show_manager_data();

    return 0;
}
