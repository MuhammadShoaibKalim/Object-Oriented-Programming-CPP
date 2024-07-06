#include <iostream>
using namespace std;

class Student {
public:
        int marks;
        string name;
        Student( string n=" ", int m=0): name(n), marks(m){}  

        void display() {
        cout << "Name: " << name << ", marks: " << marks << endl;
    }
};

int main() {
          
          Student *Student1 =new Student[5];

           Student1[0]=Student("ali", 123);
           Student1[1]=Student("ahmad", 134);
           Student1[2]=Student("akmal", 456);
           Student1[3]=Student("ajmal", 908);
           Student1[4]=Student("ahsan", 236);
       
           
           
          for (int  i = 0; i <5; i++)
         {
              Student1[i].display();
         }
         
    return 0;
}
