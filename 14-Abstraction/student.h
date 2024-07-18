#include <iostream>
using namespace std;
class Student{
    private:
        int roll;
        string name;
    public:
        void set_data(int r, string n){
            roll = r;
            name = n;
        }
        void get_data(){
            cout << "Roll: " << roll << endl;
            cout << "Name: " << name << endl;
        }

};