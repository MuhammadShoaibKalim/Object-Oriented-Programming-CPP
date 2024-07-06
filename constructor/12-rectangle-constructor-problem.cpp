#include <iostream>
using namespace std;

class Rectangle {
private:
    double width;
    double height;

public:
    
    Rectangle(double w, double h) : width(w), height(h) {}

    void setDimensions(double w, double h)
    {
        width=w;
        height=h;
    }
    double getArea() const {
        return width * height;
    }

    double getPerimeter() const {
        return 2 * (width + height);
    }
};

int main() {
    double w, h;
    cout<<" Enter the value of height : ";
    cin>>h;
    cout<<" Enter the value of width : ";
    cin>>w;


    Rectangle rect(h, w);
    cout << "Width: " << rect.getArea() << endl;
    cout << "Height: " << rect.getPerimeter() << endl;

    return 0;
}
