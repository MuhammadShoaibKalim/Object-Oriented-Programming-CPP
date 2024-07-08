#include <iostream>
using namespace std;

// Base class
class Shape {
protected:
    int width, height;

public:
    Shape(int w, int h) : width(w), height(h) {
        cout << "Shape Constructor called." << endl;
    }

    ~Shape() {
        cout << "Shape Destructor called." << endl;
    }

    void display() const {
        cout << "Width: " << width << ", Height: " << height << endl;
    }
};

// Derived class
class Rectangle : public Shape {
public:
    Rectangle(int w, int h) : Shape(w, h) {
        cout << "Rectangle Constructor called." << endl;
    }

    ~Rectangle() {
        cout << "Rectangle Destructor called." << endl;
    }

    int area() const {
        return width * height;
    }
};

int main() {
    Rectangle rect(5, 10);
    rect.display();
    cout << "Area: " << rect.area() << endl;
    return 0;
}
