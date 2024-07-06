/*
How to calculate area of Rectangle using
Polymorphism and virtual function concept.
*/

#include <iostream>
using namespace std;
class Shape {
    protected:
    double width;
    double height;
public:
    virtual void set_data() = 0; 
    virtual double get_area() const = 0; 
};

class Rectangle : public Shape {

public:
  
    void set_data() override {
        cout << "------Input------" << endl;
        cout << "Enter the height and width of the rectangle: ";
        cin >> height >> width;
    }


    double get_area() const override {
          cout << "------Output------" << endl;
          cout << "Area of the rectangle is: " <<  width * height << endl;
        
    }
};

int main() {
   
    Rectangle rect;
    Shape* shapePtr;

    shapePtr = &rect;
    shapePtr->set_data();
    shapePtr->get_area(); 
    
    

    return 0;
}
