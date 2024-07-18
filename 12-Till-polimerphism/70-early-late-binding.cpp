#include <iostream>
using namespace std;

class Animal {
public:
    virtual void sound() {
        cout << "This is a generic animal sound." << endl;
    }
};

class Dog : public Animal {
public:
    void sound() override {
        cout << "Dog barks." << endl;
    }
};

class Cat : public Animal {
public:
    void sound() override {
        cout << "Cat meows." << endl;
    }
};

void makeSound(Animal* animal) {
    animal->sound(); 
}

int main() {
    Dog dog;
    Cat cat;

    makeSound(&dog); 
    makeSound(&cat); 

    return 0;
}
