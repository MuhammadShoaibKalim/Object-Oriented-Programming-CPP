#include <iostream>
using namespace std;
template <typename T>
class Generic{
       public:
             void show(T value){
                cout<<" Generic class is here...!!"<<value<<endl;
             }
};

template<>
class Generic<char*> {
     public:
        void print(char* value)
        {
            cout<< " String value :"<<value<<endl;
        }
};

int main(){
            Generic<int> intGeneric;
            Generic<float> floatGeneric;
            Generic<char*> charGeneric;

             intGeneric.show(10);
             floatGeneric.show(10.5);
             charGeneric.print(" Hello World ");



    return 0;
}


