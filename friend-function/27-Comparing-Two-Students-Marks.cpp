#include <iostream>
using namespace std;

class Student {
public:
    int marks;
    string name;

public:
    Student(int n = 0, string m = " ") : marks(n), name(m) {}

    void input_data() {
        cout << "Enter the name: ";
        cin >> name;
        cout << "Enter marks: ";
        cin >> marks;
    }

    void output_data() const {
        cout << "Name and marks: " << name << " - " << marks << endl;
    }

    friend bool Compare(const Student& std1, const Student& std2);
};

bool Compare(const Student& std1, const Student& std2) {
    return std1.marks > std2.marks;
}

int main() {
    Student s1, s2;

    cout << "Enter the data for student one:" << endl;
    s1.input_data();

    cout << "Enter the data for student two:" << endl;
    s2.input_data();

    if (Compare(s1, s2)) {
        cout << s1.name << " has more marks." << endl;
    } else if (s1.marks == s2.marks) {
        cout << "Both students have equal marks." << endl;
    } else {
        cout << s2.name << " has more marks." << endl;
    }

    return 0;
}
