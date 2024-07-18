#include <iostream>
#include <cmath>
using namespace std;

class Circle {
private:
    double radius;

public:
    void setRadius( ) {
        cout<<" Enter the radius of circle : ";
         cin>>radius;
    }
    double getRadius() const {
        return radius;
    }
    
    double getArea() const {
        return M_PI * radius * radius;
    }
    
    double getCircumference() const {
        return 2 * M_PI * radius;
    }
};

int main() {
    Circle circle;
    circle.setRadius();
    circle.getRadius();

    
    cout << "Radius: " << circle.getRadius() << endl;
    cout << "Area: " << circle.getArea() << endl;
    cout << "Circumference: " << circle.getCircumference() << endl;
    
    return 0;
}
