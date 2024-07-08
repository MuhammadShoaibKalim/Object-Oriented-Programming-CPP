#include <iostream>
using namespace std;
class Distance{
    public:
      int feet;
      int inches;
    public:
      Distance(int ft=0,int in=0): feet(ft), inches(in){}
    bool operator < (Distance& d) const {
        if(feet<d.feet){
            return true;
        }
        if(feet==d.feet && inches<d.inches){
            return true;
        }
        return false;
    }

       bool operator > (Distance& d) const {
        if(feet>d.feet){
            return true;
        }
        if(feet==d.feet && inches>d.inches){
            return true;
        }
        return false;
    }

    void show()
    {
        cout<<feet<<"  "<<inches<<endl;
    }

};

int main() {
            
        Distance d1(12,14);
        Distance d2(12,15);
    
       if (d1>d2)
       {
         cout << "d1 is greater than d2" << endl;
       }
       else
       {
         cout << "d1 is not greater than d2" << endl;
       }

         if (d1<d2)
       {
         cout << "d1 is less than d2" << endl;
       }
       else
       {
         cout << "d1 is not less than d2" << endl;
       }





    
    return 0;
}