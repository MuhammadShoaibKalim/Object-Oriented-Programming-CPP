#include <iostream>
using namespace std;
class Box{
    private:
        double width;
    public:
        Box(double w=0): width(w){}
        
        friend void  Set_width(const Box& b);
        void get_width()
        {
            cout<<" Enter the width of the box :";
            cin>>width;
        }    
         
};
void Set_width(const Box& b)
         {
            cout<<" The width of the box :"<<b.width<<endl;
         }
int main() {
   
         Box b;
         b.get_width();
         Set_width(b);

   

    return 0;
}