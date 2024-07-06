#include <iostream>
using namespace std;

class Student {
public:
    int id;
    string name;
    int marks;

public:

    Student(int i, string n, int m) : id(i), name(n), marks(m) {}


    void get_data() {
        cout << "Enter the name: ";
        cin >> name;

        cout << "Enter the id: ";
        cin >> id;

        cout << "Enter the marks: ";
        cin >> marks;
    }

   
    void print() const {
        system("cls");
        cout << "-----------------The student details------------------" << endl;
        cout << "The student id is: " << id << endl;
        cout << "The student name is: " << name << endl;
        cout << "The student marks are: " << marks << endl;
    }


    static void display(const Student &std1) {
        std1.print();
    }
};

int main() {

    int id, marks;
    string name;

    Student std1(0, "", 0);

  
    std1.get_data();

    Student::display(std1);

    return 0;
}
