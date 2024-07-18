/*
Calculate  Area, How to calculate area 
of circle using area of Polymorphism and 
virtual function concept.
*/

#include <iostream>
using namespace std;
class Shape{
    protected:
       double r; 
     public:
         virtual void get_data()=0;
         virtual void set_data()=0;     
};
class Circle : public Shape{
    public:
        void set_data()
        {
             cout<<" ------Input------"<<endl;
            cout<<" Enter the radius of the circle: ";
            cin>>r;
        }
        void get_data()
        {     
             cout<<" ------Output------"<<endl;
              cout<<"Area of the circle is: "<<3.14*r*r<<endl;
        }

};
int main() {
         Circle c;
         Shape *s;

         s =&c;
         s->set_data();
         s->get_data();

         

    
    return 0;
}