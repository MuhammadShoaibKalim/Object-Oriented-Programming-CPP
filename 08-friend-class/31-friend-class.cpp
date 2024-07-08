#include <iostream>
using namespace std;
class Rectangle {
      public:
         double height;
         double width;
      public:
         Rectangle (double x=0, double y=0):height(x), width(y) {}
     void get_details()
    {
        cout<<" Enter the height  :";
        cin>>height;
        cout<<" Enter the width :";
        cin>>width;
    }
      friend class Area ;   
};
class Area {
    public:
    void find_area ( const Rectangle& rect){
               cout<<" The area is :"<<rect.width*rect.height<<endl;
    }
};
int main() {
       Rectangle r;
       r.get_details();

       Area a;
       a.find_area(r);

      return 0;
}