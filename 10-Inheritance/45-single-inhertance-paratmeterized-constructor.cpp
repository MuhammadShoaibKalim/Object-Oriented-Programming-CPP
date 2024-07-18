#include <iostream>
using namespace std;

// Base class
class Vehicle {
protected:
    int speed;
    int no_tyres;
    int no_wheels;

public:
    // Parameterized constructor
    Vehicle(int s, int t, int w) : speed(s), no_tyres(t), no_wheels(w) {
        cout << "Vehicle constructor called." << endl;
    }

    void display_data() const {
        cout << "Speed: " << speed << " km/h" << endl;
        cout << "Number of tyres: " << no_tyres << endl;
        cout << "Number of wheels: " << no_wheels << endl;
    }
};

// Derived class
class Car : public Vehicle {
private:
    string model;

public:

    Car(int s, int t, int w, const string &m) : Vehicle(s, t, w), model(m) {
        cout << "Car constructor called." << endl;
    }

    void display_car_data() const {
        display_data();
        cout << "Car model: " << model << endl;
    }
};

int main() {
   
    Car myCar(200, 4, 4, "Tesla Model S");
    myCar.display_car_data();

    return 0;
}
