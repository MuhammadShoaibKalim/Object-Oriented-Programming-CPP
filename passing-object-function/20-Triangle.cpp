#include <iostream>
using namespace std;
class Triangle{
    public:
           double base;
           double height;

     public:      
    Triangle(): height(0), base(0) {}
 

    void get_data ()
    {
        cout << "Enter the base : ";
        cin >> base ;
        cout<< " height of the triangle: ";
        cin >> height;
    }
    double area() const {
           cout << "Area of the triangle is : " << 0.5 * base * height << endl;
    }

   static void show_result( const Triangle T1){
                T1.area();
                

    }
};
int main() {
     Triangle T1;
     T1.get_data();
     T1.show_result(T1);
    return 0;
}