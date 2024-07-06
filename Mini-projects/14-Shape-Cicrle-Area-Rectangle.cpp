/*
How to calculate area of Rectangle using
Polymorphism and virtual function concept.


Calculate  Area, How to calculate area 
of circle using area of Polymorphism and 
virtual function concept.
*/

#include <iostream>
using namespace std;

class Shape {
protected:
    double width;
    double height;
    double radius;
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
        return width * height;
    }
};


class Circle : public Shape {
public:
    void set_data() override {
        cout << "------Input------" << endl;
        cout << "Enter the radius of the circle: ";
        cin >> radius;
    }

    double get_area() const override {
        return 3.14 * radius * radius;
    }
};


void displayArea(const Shape& shape) {
    cout << "------Output------" << endl;
    cout << "Area: " << shape.get_area() << endl;
}

int main() {

    Rectangle rect;
    Circle circ;


    Shape* shapePtr;

    shapePtr = &rect;
    shapePtr->set_data();
    displayArea(*shapePtr);

    shapePtr = &circ;
    shapePtr->set_data();
    displayArea(*shapePtr);

    return 0;
}
