#include <iostream>
using namespace std;

// Base class
class Shape {
public:
    virtual void draw() const {
        cout << "Drawing shape." << endl;
    }
};


class Circle : public Shape {
public:
    void draw() const override {
        cout << "Drawing circle." << endl;
    }
};


class Rectangle : public Shape {
public:
    void draw() const override {
        cout << "Drawing rectangle." << endl;
    }
};

int main() {
    Circle circle;
    Rectangle rectangle;

    Shape *shape1 = &circle;
    Shape *shape2 = &rectangle;

    shape1->draw();   
    shape2->draw(); 

    return 0;
}
