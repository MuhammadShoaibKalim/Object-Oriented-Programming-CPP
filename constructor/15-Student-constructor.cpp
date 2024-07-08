#include <iostream>
using namespace std;

class Student {
private:
    int studentID;
    string name;
    char grade;

public:
    // Constructor to initialize student details
    Student(int id, string n, char g) : studentID(id), name(n), grade(g) {}

    void printDetails() const {
        cout << "Student ID: " << studentID << endl;
        cout << "Name: " << name << endl;
        cout << "Grade: " << grade << endl;
    }
};

int main() {
    Student student(101, "Alice", 'A');
    student.printDetails();

    return 0;
}
