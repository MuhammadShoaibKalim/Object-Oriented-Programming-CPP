#include <iostream>
using namespace std;

class Person {
private:
    string name;
    int age;

public:
    // Constructor to initialize name and age
    Person(string n, int a) : name(n), age(a) {}

    void display() const {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

int main() {
    Person person("Alice", 30);
    person.display();

    return 0;
}
