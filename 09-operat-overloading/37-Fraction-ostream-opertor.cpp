#include <iostream>
using namespace std;

class Fraction {
public:
    int numerator;
    int denominator;

    Fraction(int n = 0, int d = 1) : numerator(n), denominator(d) {}

    // Overloading the << operator
    friend ostream& operator << (ostream& os, const Fraction& f) {
        os << f.numerator << "/" << f.denominator;
        return os;
    }

    friend istream& operator >> (istream& is,  Fraction& f)
    {
       cout << " Enter numerator: ";
        is >> f.numerator;
        cout << " Enter denominator: ";
        is >> f.denominator;
        return is;
    }
   
};

int main() {
    Fraction f1;
    Fraction f2;

    cout<<"Enter the Fraction f1 "<<endl;
    cin>>f1;
    cout<<"Enter the Fraction f2 "<<endl;
    cin>>f2;

    
    cout << " Fraction 1: " << f1 << endl;
    cout << " Fraction 2: " << f2 << endl;



    return 0;
}
