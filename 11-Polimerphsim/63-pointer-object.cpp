#include <iostream>
using namespace std;

class Rectangle {
public:
    int length;
    int breadth;

    Rectangle(int l, int b) : length(l), breadth(b) {}

    int area() {
        return length * breadth;
    }
};

int main() {
    Rectangle *p= new Rectangle(10, 5);
    
    // Rectangle *p;
    // p = &rect;
    cout << "Length: " << p->length << endl;
    cout << "Breadth: " << p->breadth << endl;
    cout << "Area: " << p->area() << endl;
    

    return 0;
}
