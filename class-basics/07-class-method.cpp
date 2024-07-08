#include <iostream>
#include<string>
using namespace std;
class Student{
    public:
      int id;
      string name;
      int age;
      void get_data(){
         cout<<" Enter name : ";
         getline(cin, name);
         cout<<" Enter id  : ";
         cin>>id;
         cout<<" Enter age : ";
         cin>>age; 
      }
      void put_data(){
         cout<<" Name : "<<name<<endl;
         cout<<" Id   : "<<id<<endl;
         cout<<" Age  : "<<age<<endl;
      }
};
int main() {
      Student std1;
      cout<<" -------------Input Data---------------"<<endl;
      std1.get_data();
      cout<<" -------------Output Data---------------"<<endl;
      std1.put_data();
     
    return 0;
}