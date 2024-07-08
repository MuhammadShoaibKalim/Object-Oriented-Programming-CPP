/*
Write a program with a mother class Animal.
Inside it defines an age and name and set_value
function.Write two child classes zebra and dolphin
show the information of zebras and dolphins. Then 
create two bases object Zebra and Dolphin which 
write a message telling the age and name give some 
extra information (e.g place of origin)
*/

#include <iostream>
using namespace std;

class Animal {
private:
    int age;
    string name;
public:
    void set_value(int a, string n) {
        age = a;
        name = n;
    }
    void show() const {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

class Zebra : public Animal {
public:
    void show_info() const {
        show();
        cout << "Zebra is from Africa" << endl;
    }
};

class Dolphin : public Animal {
public:
    void show_info() const {
        show();
        cout << "Dolphin is from the Ocean" << endl;
    }
};

int main() {
    cout << "--------------------" << endl;
    Zebra z;
    z.set_value(14, "Zebra");
    z.show_info();

    cout << "--------------------" << endl;

    Dolphin d;
    d.set_value(20, "Dolphin");
    d.show_info();

    return 0;
}
