/*
Write a program that create a class name student with 
one data member(Rollno) and two class member that input and output Rollno.

*/
#include <iostream>
using namespace std;
class Student {
    private:
        int rollno;

    public:
        void input_rollno() {
            cout << "Enter roll number: ";
            cin >> rollno;
        }

        void output_rollno() const {
            cout << "Roll number: " << rollno << endl;
        }
};
int main() {
       Student student1;

       student1.input_rollno();
       student1.output_rollno();      
    
    return 0;
}