#include <iostream>
#include <fstream>
using namespace std;

class Student {
public:
    int roll_no;
    string name;

    void set_details() {
        cout << "Enter Roll No: ";
        cin >> roll_no;
        cout << "Enter Name: ";
        cin >> name;
    }

    void display_details() {
        cout << "Roll No: " << roll_no << endl;
        cout << "Name: " << name << endl;
    }

    void save_details(ofstream &Outfile) {
        Outfile << roll_no << " " << name << endl;
    }
};

int main() {
    Student student1[3];
    ofstream Outfile("student.txt");  // Changed file extension to .txt

    if (!Outfile) {
        cerr << "File could not be opened!" << endl;
        return 1;
    }

    for (int i = 0; i < 3; i++) {
        student1[i].set_details();
        student1[i].save_details(Outfile);
    }

    Outfile.close();

    ifstream Infile("student.txt");
    if (!Infile) {
        cerr << "File could not be opened for reading!" << endl;
        return 1;
    }

    cout << "\nDetails from file:\n";
    while (Infile >> student1[0].roll_no >> student1[0].name) {
        student1[0].display_details();
    }

    Infile.close();
    return 0;
}
