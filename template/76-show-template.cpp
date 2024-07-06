#include <iostream>
using namespace std;
template <class T>

T show(T a)
{
    cout << a << endl;
    // return a;
}

int main()
{
    cout << " Here is the value of  :";
    show(4);
    cout<<" Here is string value is : ";
    show("Hello world");
    cout<<" Here is float value is :";
    show(12.3);
    return 0;
}