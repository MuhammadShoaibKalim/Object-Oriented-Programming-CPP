#include <iostream>
using namespace std;

class Rectangle {
private:
    double width;
    double height;

public:
    // Default constructor
    Rectangle() : width(0), height(0) {
        cout << "Default constructor called" << endl;
    }

    // Parameterized constructor with one parameter
    Rectangle(double w) : width(w), height(w) {
        cout << "Square constructor called" << endl;
    }

    // Parameterized constructor with two parameters
    Rectangle(double w, double h) : width(w), height(h) {
        cout << "Rectangle constructor called" << endl;
    }

    // Function to calculate area
    double area() const {
        return width * height;
    }

    // Function to display dimensions
    void display() const {
        cout << "Width: " << width << ", Height: " << height << endl;
    }
};

int main() {
    // Creating objects using different constructors
    Rectangle rect1;
    rect1.display();
    cout << "Area: " << rect1.area() << endl;

    Rectangle rect2(5);
    rect2.display();
    cout << "Area: " << rect2.area() << endl;

    Rectangle rect3(4, 6);
    rect3.display();
    cout << "Area: " << rect3.area() << endl;

    return 0;
}
