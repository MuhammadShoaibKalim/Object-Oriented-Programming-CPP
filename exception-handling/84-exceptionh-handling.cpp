#include <iostream>
#include <cmath>
using namespace std;

class MathOperations {
public:
    void calculate_square_root(float number) {
        if (number < 0) {
            throw(number);
        } else {
            float result = sqrt(number);
            cout << "Square root: " << result << endl;
        }
    }
};

int main() {
    float num;
    MathOperations obj;

    try {
        cout << "Enter a number: ";
        cin >> num;
        obj.calculate_square_root(num);
    } catch (float ex) {
        cout << "Caught an exception: Negative number entered.\n";
    }

    return 0;
}
