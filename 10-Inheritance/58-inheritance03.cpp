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
class Cat:public Animal{
    public:
        void mew(){
            cout<<" The dog can bark.";
        }
};

int main() {
           Dog dog;
           Cat cat;

           dog.eat();
           dog.bark();

              cat.eat();
              cat.mew();
                  
    return 0;
}