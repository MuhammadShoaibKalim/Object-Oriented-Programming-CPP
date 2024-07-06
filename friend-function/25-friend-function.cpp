#include <iostream>
using namespace std;

class Complex {
public:
    double real;
    double img;

public:
    Complex(double x = 0, double y = 0) : real(x), img(y) {}

    friend Complex addComplex(const Complex& complex1, const Complex& complex2);

    void display() const {
        cout << endl<<"        The complex number is " << real << " + " << img << "i" << endl;
    }
};


Complex addComplex(const Complex& a, const Complex& b) {
    return Complex(a.real + b.real, a.img + b.img);
}

int main() {
    Complex a1(3.0, 4.0);
    Complex a2(1.0, 2.0);

    Complex a3 = addComplex(a1, a2);

    cout << "First :";
    a1.display();
    cout << "Second :";
    a2.display();
    cout << "Sum  :";
    a3.display();

    return 0;
}
