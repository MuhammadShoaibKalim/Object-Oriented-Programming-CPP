#include <iostream>
using namespace std;

class Complex {
public:
    double real;
    double img;

public:
    Complex(double r = 0, double i = 0) : real(r), img(i) {}

    void input_data() {
        cout << "Enter the real part: ";
        cin >> real;
        cout << "Enter the imaginary part: ";
        cin >> img;
    }

    void output_data() const {
        cout << endl<<"Complex number: " << real << " + " << img << "i" << endl;
    }

    // Friend function declared inside the class
    friend Complex addComplex(const Complex& c1, const Complex& c2);
};

// Definition of the friend function outside the class
Complex addComplex(const Complex& c1, const Complex& c2) {
    return Complex(c1.real + c2.real, c1.img + c2.img);
}

int main() {
    Complex complex1, complex2;

    cout << "Enter the data of the first complex number:" << endl;
    complex1.input_data();

    cout << "Enter the data of the second complex number:" << endl;
    complex2.input_data();

    Complex complex3 = addComplex(complex1, complex2);

    cout <<endl<<" The sum of the two complex numbers is: ";
    complex3.output_data();

    return 0;
}
