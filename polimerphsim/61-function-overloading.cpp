#include <iostream>
using namespace std;
class Shape {
    public:
       virtual void draw() const {
            cout << " The shape can be drawn. " << endl;
        }
        
};
class Circle : public Shape {
     public:
        
        void draw() const override {
            cout << " Drawing a circle. " << endl;
        }
};
class Square : public Shape {
public:
    void draw() const override {
        cout << "Drawing a square" << endl;
    }
};
int main() {
            // Square* square;
            Square square;
            Circle circle;

            square.draw();
            circle.draw();

            // square = new Square();
            // square->draw();
            
            circle.draw();

    return 0;
}