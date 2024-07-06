#include <iostream>
using namespace std;

class Grades {
public:
    int phy_marks;
    int math_marks;
    int cs_marks;

public:
    void get_marks() {
        cout << "Enter physics marks: ";
        cin >> phy_marks;

        cout << "Enter math marks: ";
        cin >> math_marks;

        cout << "Enter cs marks: ";
        cin >> cs_marks;
    }

    void scholarship_offer() {
        int total = phy_marks + math_marks + cs_marks;
        cout << "Total marks: " << total << endl;
        cout << "Grade: ";

        if (total >= 270) {
            cout << "A" << endl;
        } else if (total >= 240) {
            cout << "B" << endl;
        } else if (total >= 210) {
            cout << "C" << endl;
        } else {
            cout << "Fail" << endl;
        }

        if (total >= 270) {
            cout << "You are eligible for a scholarship." << endl;
        } else {
            cout << "You are not eligible for a scholarship." << endl;
        }
    }
};

int main() {
    Grades first_year;
    first_year.get_marks();
    first_year.scholarship_offer();
    return 0;
}
