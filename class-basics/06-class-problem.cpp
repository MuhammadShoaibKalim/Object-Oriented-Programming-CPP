#include <iostream>
using namespace std;
class A{
    public:
      int a, b;
      A(int a, int b)
      {
        this->a=a;
        this->b=b;
      }
      int get_sum(){
              return (a+b);
      }
};


int main() {
     A obj1(10, 20);
    //  A obj2(100, 200);

     //Here make an object for a it will change the value from 10 to 5
     A *ptr1;  
     ptr1 = &obj1; 
     ptr1->a=5;
     cout<<" The sum for a object :" <<obj1.get_sum()<<endl;  //25 will be the output

    
      //Same as above  make an object for b it will change the value from 10 to 5
    //  A *ptr2;  
    //  ptr2 = &obj2; 
    //  (*ptr2).a=10;
    //  cout<<" The sum for b object :"<<obj2.get_sum();
    
    return 0;
}