#include <iostream>
using namespace std;
template<typename T>
class Max{
       public:
          T findMax(T a, T b){
             return (a>b)? a:b;
          }
};

int main() {
      
         Max <int> intMax;
         cout<<" Maximum of 10 and 20 is :"<<intMax.findMax(12, 14)<<endl;

       
    //    Max<int> intMax;
    //    cout << "Maximum of 10 and 20 is: " << intMax.findMax(10, 20) << endl;
       
    //    Max<float> floatMax;
    //    cout << "Maximum of 3.14 and 6.28 is: " << floatMax.findMax(3.14, 6.28) << endl;
       
   
    
    return 0;
}