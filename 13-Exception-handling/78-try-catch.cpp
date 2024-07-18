#include <iostream>
using namespace std;
int division()
{
    try
    {
        int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    if(b == 0) 
         throw(0);
    cout << "Division: " << a / b << endl;
      
    }
    catch(int)
    {
        cout<< " can not divide.";
    }
    
    return 0;
}
int main() {
      division();
      
    return 0;
}