#include <iostream>
using namespace std;
class Employee {
      public:
         int  days;
         int  working_hours;
         double per_hour_amount;
         string name;

      public:
         Employee (int x=0, int y=0, int z=0, string n=" "):days(x), working_hours(y),per_hour_amount(z), name(n) {}
     void get_details()
    {
        cout<<" Enter the name of Employee  :";
        cin>>name;
        cout<<" Enter the no of working hours per day :";
        cin>>working_hours;
        cout<<" Enter the per hour amount of earning :";
        cin>>per_hour_amount;
        cout<<" Enter the no of working days in month :";
        cin>>days;
    }
      friend class Payroll ;   
};
class Payroll {
    public:
    void calculate_salary ( const Employee& employee1){
                int salary = employee1.working_hours * employee1.per_hour_amount * employee1.days;
                cout<<" Salary of "<<employee1.name<<" is : "<<salary<<endl;
    }
    
};
int main() {    
       Employee employee1;
       employee1.get_details();

       Payroll payroll1;
       payroll1.calculate_salary(employee1);

       

      return 0;
}