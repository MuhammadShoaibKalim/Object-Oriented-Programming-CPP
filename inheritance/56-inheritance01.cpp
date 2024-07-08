#include <iostream>
using namespace std;
class Animal{
    public:
        void eat(){
            cout<<" The animal can eat.";
        }
}; 
class Dog:public Animal{
    public:
        void bark(){
            cout<<" The dog can bark.";
        }
};

int main() {
           Dog dog;
           dog.eat();
              dog.bark();
    
    return 0;
}