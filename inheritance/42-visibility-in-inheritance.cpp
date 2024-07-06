#include <iostream>
using namespace std;
class Base{
          public:
         int publicVar;
         private:
          int privateVar;
         protected:
           int protectedVar;
         public:
           Base (): publicVar(0), privateVar(0), protectedVar(0){}  

};
class Derived_public :public Base{ 
    public:
       void show()
       {
    cout<<" Public member of Base class is accessible in Derived class :"<< publicVar<< endl;
    // cout<<" Private member of Base class is not accessible in Derived class"<< privateVar<< endl;
   // cout<<" protected member of Base class is also not accessible in Derived class"<< protectedVar<< endl;
     
       }
};
class Derived_private :private Base{ 
       public:
       void show()
       {
    cout<<" Public member of Base class is accessible in Derived class :"<< publicVar<< endl;
    //cout<<" Private member of Base class is not  accessible in Derived class"<< privateVar<< endl;
    cout<<" Protected member of Base class is accessible in Derived class :"<< protectedVar<< endl;
     
       }
};

class Derived_protected :protected Base{ 
     public:
       void show()
       {
    cout<<" Public member of Base class is accessible in Derived class :"<< publicVar<< endl;
    //cout<<" Private member of Base class is not  accessible in Derived class"<< privateVar<< endl;
    cout<<" Protected member of Base class is accessible in Derived class :"<< protectedVar<< endl;
     
       }
};

int main() {
          Derived_public d1;
          d1.show();

          Derived_private d2;
          d2.show();

          Derived_protected d3;
          d3.show();
          
    
    return 0;
}