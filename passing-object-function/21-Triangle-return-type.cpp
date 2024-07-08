#include <iostream>
using namespace std;

class Triangle {
public:
    double base;
    double height;

public:

    Triangle() : base(0), height(0) {}


    Triangle(double b, double h) : base(b), height(h) {}


    void get_data() {
        cout << "Enter the base: ";
        cin >> base;
        cout << "Enter the height of the triangle: ";
        cin >> height;
    }


    double area() const {
        return 0.5 * base * height;
    }

    void show_result() const {
        cout << "Area of the triangle is: " << area() << endl<<endl;
    }


    Triangle create_new_triangle(double new_height, double new_base) {
        return Triangle(new_base, new_height);
    }
};

int main() {
    Triangle T1;
    T1.get_data();
    T1.show_result();

    Triangle T2 = T1.create_new_triangle(10, 33);
    cout << "The new triangle is: ";
    T2.show_result();

    return 0;
}

