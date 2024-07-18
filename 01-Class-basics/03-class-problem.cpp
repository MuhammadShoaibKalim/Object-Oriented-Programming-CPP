#include <iostream>
using namespace std;
class A
{
public:
    int a;
    void modify_a(int a)
    {
        this->a = a;
    }
};

int main()
{
    // A a(10);        // error show kry ga
    A a;
    a.modify_a(10); // this correct way
    cout << a.a << endl;

    return 0;
}