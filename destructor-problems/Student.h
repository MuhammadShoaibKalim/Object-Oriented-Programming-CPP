// Student.h
#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    int studentID;
    string name;
    char grade;

public:
    Student(int id, string n, char g);
    void printDetails() const;
};

#endif
