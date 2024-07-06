#include <iostream>
using namespace std;

class Division {
public:
    void divide_numbers(float numerator, float denominator) {
        if (denominator == 0) {
            throw(denominator);
        } else {
            float result = numerator / denominator;
            cout << "Result: " << result << endl;
        }
    }
};

int main() {
    float num, denom;
    Division obj;

    try {
        cout << "Enter numerator: ";
        cin >> num;
        cout << "Enter denominator: ";
        cin >> denom;
        obj.divide_numbers(num, denom);
    } catch (float ex) {
        cout << "Caught an exception: Division by zero.\n";
    }

    return 0;
}
