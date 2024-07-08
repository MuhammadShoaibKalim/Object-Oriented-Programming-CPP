#include <iostream>
using namespace std;
class Area{
       public:
         double height;
         double width;
       public:  
   
        Area(double h=0,double w=0):height(h), width(w){}

        friend Area findArea(double a, double b);

        void get_data(){
            cout<<"Enter height and width: ";
            cin>>height>>width;
        }
        void show_data(const Area& one, const Area& two2){
                cout<<"Area of first rectangle: "<<one.height*one.width<<endl;
                // cout<<"Area of second rectangle: "<<two2.height*two2.width<<endl;
        }

};
Area findArea(const Area& one, const Area& two2);
int main() {
        Area one1, two2;
        one1.get_data();
        one1.show_data(one1, two2);


    return 0;
}