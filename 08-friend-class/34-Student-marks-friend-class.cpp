#include <iostream>
using namespace std;

class Student {
private:
    string name;
    double marks;

public:
    Student(string n = "", double m = 0) : name(n), marks(m) {}

    void get_details() {
        cout << "Enter the name: ";
        cin >> name;
        cout << "Enter the marks: ";
        cin >> marks;
    }

    friend class GradeCalculation;
};

class GradeCalculation {
public:
    void calculate_grade(const Student& student) {
        char grade;
        if (student.marks >= 90) grade = 'A';
        else if (student.marks >= 80) grade = 'B';
        else if (student.marks >= 70) grade = 'C';
        else if (student.marks >= 60) grade = 'D';
        else grade = 'F';

        cout << student.name << " received grade: " << grade << endl;
    }
};

int main() {
    Student student;
    student.get_details();

    GradeCalculation gc;
    gc.calculate_grade(student);

    return 0;
}
