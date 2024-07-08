#include <iostream>
using namespace std;
class student{
    public:
      int marks;
      int age;

      void get_data();
      int perform_task();
      void print_data();
};

void student::get_data()
{  
    cout<<" Please enter the marks and age of student :";
    cin>>marks>>age;
}

int student::perform_task()
{
     if(marks>50 && age>18)
     {
        cout<<" The student is eligible for gitHub campus expert.";
     }
     else if(marks>50 && age<18)
     {
        cout<<" The student is not eligible for gitHub campus expert.";
     }
     else if(marks>70 && age>18)
     {
        cout<<" The student is eligible for google scholarships.";
     }
     else
     {
        cout<<" The student is not for google scholarship nor for gitHub campus expert .";
     }
}
void student::print_data()
{ 
     cout<<" "<<perform_task()<<endl;
}
int main() {
   
     student student1;
     student1.get_data();
    //  student1.perform_task();
    return 0;
}