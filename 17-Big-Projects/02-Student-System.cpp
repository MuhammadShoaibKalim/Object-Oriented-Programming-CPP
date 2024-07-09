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
    int age;
    cout<<" Enter the age :";
    cin>>age;
    char grade;
    cout<<" Enter the grade :";
    cin>>grade;

    Student newStudent(name, id, age, grade);
    students.push_back(newStudent);
}
int main() {
       vector<Student> students;
       students.push_back(Student("Ahmad", 1, 18, 'A'));

       int option;
       while(true)
       {
        cout<<"\n  1. Add new student ";
        cout<<"\n  2. Display all student ";
        cout<<"\n  3. Update Student ";
        cout<<"\n  4. Search Student ";
        cout<<"\n  5. Delete Student ";
        cout<<"\n  6. Exit";

        cout << "\n Enter your choice: ";
        cin >> option;
       }
    
    return 0;
}