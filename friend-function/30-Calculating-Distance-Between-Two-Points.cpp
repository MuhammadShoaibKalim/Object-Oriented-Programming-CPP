#include <iostream>
#include <cmath>
using namespace std;

class Point {
private:
    double x;
    double y;

public:
    Point(double x_val = 0, double y_val = 0) : x(x_val), y(y_val) {}

    friend double calculateDistance(const Point& p1, const Point& p2);

    void getInput() {
        cout << "Enter x coordinate: ";
        cin >> x;
        cout << "Enter y coordinate: ";
        cin >> y;
    }

    void display() const {
        cout << "Point: (" << x << ", " << y << ")" << endl;
    }
};

double calculateDistance(const Point& p1, const Point& p2) {
    return sqrt(pow(p2.x - p1.x, 2) + pow(p2.y - p1.y, 2));
}

int main() {
    Point p1, p2;
    cout << "Enter first point:\n";
    p1.getInput();
    cout << "Enter second point:\n";
    p2.getInput();

    double distance = calculateDistance(p1, p2);
    cout << "Distance between points: " << distance << endl;

    return 0;
}
