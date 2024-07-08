#include <iostream>
using namespace std;

class Base
{
public:
    virtual void show()
    {
        cout << "Base class show function (Late Binding)" << endl;
    }
};

class Derived : public Base
{
public:
    void show() override
    {
        cout << "Derived class show function (Late Binding)" << endl;
    }
};

int main()
{
    Base *b;
    Derived d;


       
    b = &d;
    system("cls");
    cout << endl;
    b->show();


    return 0;
}
