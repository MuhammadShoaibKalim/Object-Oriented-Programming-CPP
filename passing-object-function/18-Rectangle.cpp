#include <iostream>
using namespace std;

class Rectangle {
public:
    double width;
    double height;

    Rectangle(double w, double h) : width(w), height(h) {}

    double getArea() const {
        return width * height;
    }
};

void printArea(Rectangle rect) {
    cout << "Area of the rectangle: " << rect.getArea() << endl;
}

int main() {
    Rectangle rect(4.0, 5.0);
    printArea(rect);

    return 0;
}
