#include <iostream>
using namespace std;
class Area{
    public:
      double width;
      double height;
    public:
      Area(): width(0),height(0){
        cout<<" This is default constructor."<<endl;
      };
      Area(double w,double h):  width(w), height(h){
        cout<<" This is parameterized constructor."<<endl;
      };

     void get_data(){
        cout<<" enter the value of height :";
        cin>>height;
        cout<<" enter the value of width :";
        cin>>width;
     };
       int set_data() const{
          return (height*width);
      };
     void show(){
             cout<<" area of rectangle is :"<<set_data()<<endl;
     };
       
};
int main() {
    Area area1(12, 13);
    area1.set_data();
    area1.show();

    Area area2(10,20);
    area2.get_data();
    area2.show();

    return 0;
}