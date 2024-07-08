/*
Calculate  Area, How to calculate area 
of cone using area of Polymorphism and 
virtual function concept.
Area=A=πr(r+sqrt(h2+r2))
*/

#include <iostream>
#include<cmath>
using namespace std;
class Shape{
    protected:
       double r; 
       double h;
     public:
         virtual void get_data()=0;
         virtual void set_data()=0;     
};
class Cone : public Shape{
    public:
        void set_data()
        {
             cout<<" ------Input------"<<endl;
            cout<<" Enter the radius and height of the cone : ";
            cin>>r>>h;
        }
        void get_data()
        {     
             cout<<" ------Output------"<<endl;
             double area=3.14*r*(r+sqrt(h*h+r*r));
              cout<<"Area of the circle is: "<<area <<endl;  //πr(r+sqrt(h2+r2
        }

};
int main() {
         Cone c;
         Shape *s;

         s =&c;
         s->set_data();
         s->get_data();

         

    
    return 0;
}