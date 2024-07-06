#include <iostream>
using namespace std;
template <class type>
class T{
    public:
    type show(type a){
        cout<<a<<endl;
    }

};

int main()
{ 
      T <int> intObj;
      cout<<" Here is integer value : ";
      intObj.show(10);
      
        T <double> doubleObj;
      cout<<" Here is double value : ";
      doubleObj.show(12.3);

        T <string> stringObj;
      cout<<" Here is integer value : ";
      stringObj.show("Shoaib");

  
}