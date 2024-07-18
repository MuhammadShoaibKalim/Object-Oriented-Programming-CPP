#include <iostream>
using namespace std;


template <typename T>
class Counter{
      private:
          T value;
       public:
           Counter (T v): value(v) {}
         void set_value  (T v)
         {
            value=v;
         }     

          T get_value ()
         {
           return value;
         } 
};

int main() {
       Counter <int>intCounter(123);
       Counter <double> doubleCounter(12.2);
       Counter <string> stringCounter("Hello jee");

       cout << "Int Counter: " <<intCounter.get_value() << endl;
       cout << "Double Counter: " << doubleCounter.get_value() << endl;
       cout << "String Counter: " << stringCounter.get_value() << endl;

    return 0;
}


