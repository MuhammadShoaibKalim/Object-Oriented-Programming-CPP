#include <iostream>
#include <cstring>
using namespace std;
template <typename T>
class Comparator{
     public:
          const  static bool isequal(T a, T b)
          {
              return ( a==b );
          }
};
template <>
class Comparator <const char*>{
     public:
            static bool isequal(const char* a, const char* b)
          {
              return strcmp( a, b )==0;
          }
};
int main() {
          cout<< boolalpha;

          cout<< " is this equal to :"<<Comparator<int>::isequal(12,13)<< endl;;
          cout<< " is this equal to :"<<Comparator<double>::isequal(12.3,12.3)<<endl;

          cout<< " is this equal to :"<<Comparator<const char*>::isequal("Hello", "world")<< endl;;
          cout<< " is this equal to :"<<Comparator<const char*>::isequal("C++", "C++")<< endl;;

    
    return 0;
}