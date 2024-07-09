#include <iostream>
#include<vector>
using namespace std;
class Student
{
    private:
      string name;
      int id;
      int age;
      char grade;
    public:
      Student(string n, int i, int a, char g) : name(n), id(i), age(a), grade(g) {}; 
    void set_name(string name)
    {
        this->name = name;
    }  
    string get_name() const
    {
        return name;
    }
    
    void set_id(int id)
    {
        this->id = id;
    }
    int get_id() const
    {
        return id;
    }
    
    void set_age(int age)
    {
        this->age = age;
    }
    int get_age() const
    {
        return age;
    }
    
    void set_grade(char grade)
    {
        this->grade = grade;
    }

};
//create function to add new student
void addNewStudent(vector<Student> &students)
{
    string name;
    cout<<" Enter the name :";
    cin>>name;
    int id;
    cout<<" Enter the id :";
    cin>>id;
     //check if already exits
    for (int i = 0; i < students.size(); i++)
    {
        if(students[i].get_id()==id)
        {
            cout<<"\t\t Student already exist"<<endl;
            return;
        }
    }
    int age;
    cout<<" Enter the age :";
    cin>>age;
    char grade;
    cout<<" Enter the grade :";
    cin>>grade;
    
    Student newStudent(name, id, age, grade);
    students.push_back(newStudent);
    cout<<"\t\t Student added successfully!"<<endl;
}
void displayAllStudent(vector<Student> &students)
{
     
}
int main() {
       vector<Student> students;
       students.push_back(Student("Ahmad", 1, 18, 'A'));

       int option;
       while(true)
       {
        cout<<"\t\t ------------------------------ "<<endl;
        cout<<"\t\t    Student Management System   "<<endl;
        cout<<"\t\t ------------------------------ "<<endl;

        cout<<"\t\t  1. Add new student "<<endl;
        cout<<"\t\t  2. Display all students "<<endl;
        cout<<"\t\t  3. Update Student "<<endl;
        cout<<"\t\t  4. Search Student "<<endl;
        cout<<"\t\t  5. Delete Student "<<endl;
        cout<<"\t\t  6. Exit"<<endl;

        cout <<"\t\t Enter your choice: ";
        cin >> option;

        switch (option)
        {
           case 1:
                addNewStudent(students);
                break;
           case 2:
                 displayAllStudent(students);
                 break;   
        }
       }
    
    return 0;
}