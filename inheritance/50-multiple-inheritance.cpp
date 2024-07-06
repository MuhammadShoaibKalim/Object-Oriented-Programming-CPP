#include <iostream>
using namespace std;


class Car {
protected:
    int maxSpeed;
    int numberOfWheels;

public:
    Car(int speed, int wheels) : maxSpeed(speed), numberOfWheels(wheels) {
        cout << "Car constructor called." << endl;
    }

    void drive() {
        cout << "Driving at speed: " << maxSpeed << " km/h with " << numberOfWheels << " wheels." << endl;
    }

    void display_car_data() {
        cout << "Max speed: " << maxSpeed << " km/h" << endl;
        cout << "Number of wheels: " << numberOfWheels << endl;
    }
};

class Boat {
protected:
    int maxSpeed;
    int numberOfSails;

public:
    Boat(int speed, int sails) : maxSpeed(speed), numberOfSails(sails) {
        cout << "Boat constructor called." << endl;
    }

    void sail() {
        cout << "Sailing at speed: " << maxSpeed << " knots with " << numberOfSails << " sails." << endl;
    }

    void display_boat_data() {
        cout << "Max speed: " << maxSpeed << " knots" << endl;
        cout << "Number of sails: " << numberOfSails << endl;
    }
};


class AmphibiousVehicle : public Car, public Boat {
private:
    string model;

public:
    AmphibiousVehicle(int carSpeed, int carWheels, int boatSpeed, int boatSails, const string &m)
        : Car(carSpeed, carWheels), Boat(boatSpeed, boatSails), model(m) {
        cout << "AmphibiousVehicle constructor called." << endl;
    }

    void display_amphibious_vehicle_data() {
        display_car_data();
        display_boat_data();
        cout << "Model: " << model << endl;
    }
};

int main() {
    AmphibiousVehicle av(120, 4, 30, 2, "AmphiCar Model 770");
    av.display_amphibious_vehicle_data();

    cout << endl;
    cout<<"|------Here it is inherited properties from both---------|"<<endl;
    av.drive();
    av.sail();

    return 0;
}
