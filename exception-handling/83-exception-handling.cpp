#include <iostream>
using namespace std;
class ValidateAge{
    public:
       ValidateAge(int age){};

       bool valid_age(int age){
         if(age<0 || age>150)
         {
            cout<<"Not valid age.";
            throw(age);
         }
         else{
            cout<<"Valid age.";
         }
       } 
};
int main() {
           int age;
           ValidateAge A(age);

    try
    {
        cout<<" Enter your age : ";
        cin>>age;
        A.valid_age(age);
    }
    catch(int ex)
    {
        cout<<" An exception handling occur. \n ";
    }
    
    
    return 0;
}