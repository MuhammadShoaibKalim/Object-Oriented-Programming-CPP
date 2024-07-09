#include <iostream>
#include <vector>
using namespace std;

class Student {
private:
    string name;
    int id;
    int age;
    char grade;

public:
    Student(string n, int i, int a, char g) : name(n), id(i), age(a), grade(g) {};

    void set_name(string name) {
        this->name = name;
    }
    string get_name() const {
        return name;
    }

    void set_id(int id) {
        this->id = id;
    }
    int get_id() const {
        return id;
    }

    void set_age(int age) {
        this->age = age;
    }
    int get_age() const {
        return age;
    }

    void set_grade(char grade) {
        this->grade = grade;
    }
    char get_grade() const {
        return grade;
    }

    void display_student() const {
        cout << "\t\t Name : " << name << endl;
        cout << "\t\t Id   : " << id << endl;
        cout << "\t\t Age  : " << age << endl;
        cout << "\t\t Grade: " << grade << endl;
    }
};

void addNewStudent(vector<Student>& students) {
    string name;
    cout << "Enter the name: ";
    cin >> name;
    int id;
    cout << "Enter the id: ";
    cin >> id;
    // Check if already exists
    for (int i = 0; i < students.size(); i++) {
        if (students[i].get_id() == id) {
            cout << "\t\t Student already exists" << endl;
            return;
        }
    }
    int age;
    cout << "Enter the age: ";
    cin >> age;
    char grade;
    cout << "Enter the grade: ";
    cin >> grade;

    Student newStudent(name, id, age, grade);
    students.push_back(newStudent);
    cout << "\t\t Student added successfully!" << endl;
}

void displayAllStudents(const vector<Student>& students) {
    cout << "\t\t ------------------------------ " << endl;
    cout << "\t\t    Students List   " << endl;

    if (students.empty()) {
        cout << "\t\t No student found..." << endl;
    }

    for (int i = 0; i < students.size(); i++) {
        students[i].display_student();
        cout << endl;
    }
}

void searchStudent(const vector<Student>& students) {
    int id;
    cout << "\t\t Enter the id to search: ";
    cin >> id;

    bool found = false;

    cout << "\t\t ------------------------------ " << endl;
    cout << "\t\t    Search Result   " << endl;

    for (int i = 0; i < students.size(); i++) {
        if (students[i].get_id() == id) {
            students[i].display_student();
            found = true;
            break;
        }
    }
    if (!found) {
        cout << "\t\t No student found with id " << id << endl;
    }
}

void updateStudent(vector<Student>& students) {
    int id;
    cout << "Enter the student id to update: ";
    cin >> id;

    int choice;
    bool found = false;
    for (int i = 0; i < students.size(); i++) {
        if (students[i].get_id() == id) {
            found = true;
            cout << "\t\t ------------------- " << endl;
            cout << "\t\t Student found....!!!" << endl;

            cout << "\t\t 1. Update name " << endl;
            cout << "\t\t 2. Update age " << endl;
            cout << "\t\t 3. Update grade " << endl;
            cout << "\t\t Enter your choice: ";
            cin >> choice;
            switch (choice) {
                case 1: {
                    string name;
                    cout << "\t\t Enter the new name: ";
                    cin >> name;
                    students[i].set_name(name);
                    break;
                }
                case 2: {
                    int age;
                    cout << "\t\t Enter the new age: ";
                    cin >> age;
                    students[i].set_age(age);
                    break;
                }
                case 3: {
                    char grade;
                    cout << "\t\t Enter the new grade: ";
                    cin >> grade;
                    students[i].set_grade(grade);
                    break;
                }
                default:
                    cout << "\t\t Invalid choice..." << endl;
            }
            break;
        }
    }

    if (!found) {
        cout << "\t\t No student found with id " << id << endl;
    }
}

void deleteStudent(vector<Student>& students) {
    int id;
    cout << "Enter the student id to delete: ";
    cin >> id;

    bool found = false;
    cout << "\t\t ------------------------------ " << endl;
    cout << "\t\t    Students Delete   " << endl;
    for (int i = 0; i < students.size(); i++) {
        if (students[i].get_id() == id) {
            found = true;
            students.erase(students.begin() + i);
            cout << "\t\t Student deleted successfully!" << endl;
            break;
        }
    }

    if (!found) {
        cout << "\t\t No student found with id " << id << endl;
    }
}

int main() {
    vector<Student> students;
    students.push_back(Student("Ahmad", 1, 18, 'A'));

    char choice;
    do {
        int option;
        system("cls");
        cout << "\t\t ------------------------------ " << endl;
        cout << "\t\t    Student Management System   " << endl;
        cout << "\t\t ------------------------------ " << endl;
        cout << "\t\t 1. Add new student " << endl;
        cout << "\t\t 2. Display all students " << endl;
        cout << "\t\t 3. Search Student " << endl;
        cout << "\t\t 4. Update Student " << endl;
        cout << "\t\t 5. Delete Student " << endl;
        cout << "\t\t 6. Exit" << endl;

        cout << "\t\t Enter your choice: ";
        cin >> option;

        switch (option) {
            case 1:
                addNewStudent(students);
                break;
            case 2:
                displayAllStudents(students);
                break;
            case 3:
                searchStudent(students);
                break;
            case 4:
                updateStudent(students);
                break;
            case 5:
                deleteStudent(students);
                break;
            case 6:
                return 0;
            default:
                cout << "\t\t Invalid choice.." << endl;
        }

        cout << "Do you want to continue: [y/n]? ";
        cin >> choice;

    } while (choice == 'y' || choice == 'Y');

    return 0;
}
