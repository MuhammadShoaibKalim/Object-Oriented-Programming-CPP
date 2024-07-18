#include <iostream>
using namespace std;

// Base class 1
class Animal
{
public:
    void eat() const
    {
        cout << "Animal eats." << endl;
    }
};

// Base class 2
class Bird
{
public:
    void fly() const
    {
        cout << "Bird flies." << endl;
    }
};

// Derived class
class Eagle : public Animal, public Bird
{
public:
    void hunt() const
    {
        cout << "Eagle hunts." << endl;
    }

    // Override eat() to specialize behavior
    void eat() const
    {
        cout << "Eagle eats fresh prey." << endl;
    }
};

int main()
{
    Eagle eagle;
    eagle.eat(); 
    eagle.fly();
    eagle.hunt();
    return 0;
}
