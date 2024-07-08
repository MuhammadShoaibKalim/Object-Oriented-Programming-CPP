#include <iostream>
using namespace std;

class Circle {
public:
    double radius;

    Circle(double r) : radius(r) {}

    double area() {
        return 3.14159 * radius * radius;
    }
};

int main() {
  
    Circle *circlePtr = new Circle(5.0);


    cout << "Radius: " << circlePtr->radius << endl;
    cout << "Area: " << circlePtr->area() << endl;

    // Deallocating memory
    delete circlePtr;

     
    return 0;
}
