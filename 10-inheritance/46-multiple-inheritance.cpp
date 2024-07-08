#include <iostream>
using namespace std;

class Vehicle {
protected:
    int no_tyres;
    int no_wheels;
    int speed;

public:
    Vehicle(int t, int w, int s) : no_tyres(t), no_wheels(w), speed(s) {
        cout << "Vehicle Constructor called." << endl;
    }
    void display_vehicle_data() {
        cout << "No of tyres: " << no_tyres << endl;
        cout << "No of wheels: " << no_wheels << endl;
        cout << "Speed: " << speed << endl;
    }
};

class Car : public Vehicle {
private:
    string model;

public:
    Car(int t, int w, int s, const string &m) : Vehicle(t, w, s), model(m) {
        cout << "Car Constructor called." << endl;
    }

    void display_car_data() {
        display_vehicle_data();
        cout << "Model: " << model << endl;
    }
};

class AirCraft {
protected:
    int altitude;

public:
    AirCraft(int a) : altitude(a) {
        cout << "AirCraft Constructor called." << endl;
    }
    void display_aircraft_data() {
        cout << "Altitude: " << altitude << " feet" << endl;
    }
};

class FlyingCar : public Car, public AirCraft {
private:
    string flyingCarModel;

public:
    FlyingCar(int t, int w, int s, const string &carModel, int a, const string &fCarModel)
        : Car(t, w, s, carModel), AirCraft(a), flyingCarModel(fCarModel) {
        cout << "FlyingCar constructor called." << endl;
    }

    void display_flying_car_data() {
        display_car_data();
        display_aircraft_data();
        cout << "Flying car model: " << flyingCarModel << endl;
    }
};

int main() {
    FlyingCar myFlyingCar(4, 4, 120, "Tesla Model X", 30000, "Tesla SkyModel");
    myFlyingCar.display_flying_car_data();

    return 0;
}
