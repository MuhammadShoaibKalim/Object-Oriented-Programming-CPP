#include <iostream>
using namespace std;

class Example {
public:
    void display(int i) {
        cout << "Integer: " << i << endl;
    }

    void display(double d) {
        cout << "Double: " << d << endl;
    }
};

int main() {
    Example obj;
    obj.display(10);   
    obj.display(10.5);  

    return 0;
}
