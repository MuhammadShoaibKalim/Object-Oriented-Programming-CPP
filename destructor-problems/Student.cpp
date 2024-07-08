// Student.cpp
#include "Student.h"

Student::Student(int id, string n, char g) : studentID(id), name(n), grade(g) {}

void Student::printDetails() const {
    cout << "Student ID: " << studentID << endl;
    cout << "Name: " << name << endl;
    cout << "Grade: " << grade << endl;
}
