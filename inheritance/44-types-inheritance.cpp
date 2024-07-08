#include <iostream>
using namespace std;

// Base class
class Vehicle {
public:
    int speed;
    int no_tyres;
    int no_wheels;

    void get_data() {
        cout << "Enter the speed of the vehicle: ";
        cin >> speed;
        cout << "Enter the number of tyres: ";
        cin >> no_tyres;
        cout << "Enter the number of wheels: ";
        cin >> no_wheels;
        cout << endl;
    }

    void display_data() const {
        cout << "Speed: " << speed << " km/h" << endl;
        cout << "Number of tyres: " << no_tyres << endl;
        cout << "Number of wheels: " << no_wheels << endl;
    }
};

// Derived class for Car
class Car : public Vehicle {
public:
    string model;

    void drive() {
        cout << "Car is used for driving." << endl;
    }

    void get_car_data() {
        get_data();
        cout << "Enter the car model: ";
        cin >> model;
    }

    void display_car_data() const {
        display_data();
        cout << "Car model: " << model << endl;
    }
};

// Derived class for Bus
class Bus : public Vehicle {
public:
    int seating_capacity;

    void drive() {
        cout << "Bus is used for transporting people." << endl;
    }

    void get_bus_data() {
        get_data();
        cout << "Enter the seating capacity: ";
        cin >> seating_capacity;
    }

    void display_bus_data() const {
        display_data();
        cout << "Seating capacity: " << seating_capacity << " people" << endl;
    }
};

// Derived class for Truck
class Truck : public Vehicle {
public:
    double load_capacity;

    void load() {
        cout << "Truck is used for loading goods." << endl;
    }

    void get_truck_data() {
        get_data();
        cout << "Enter the load capacity (in tons): ";
        cin >> load_capacity;
    }

    void display_truck_data() const {
        display_data();
        cout << "Load capacity: " << load_capacity << " tons" << endl;
    }
};

// Derived class for SportsCar
class SportsCar : public Vehicle {
public:
    string sports_feature;

    void race() {
        cout << "Sports car is used for racing." << endl;
    }

    void get_sports_car_data() {
        get_data();
        cout << "Enter the sports feature: ";
        cin >> sports_feature;
    }

    void display_sports_car_data() const {
        display_data();
        cout << "Sports feature: " << sports_feature << endl;
    }
};

int main() {
    Car myCar;
    myCar.get_car_data();
    myCar.drive();
    myCar.display_car_data();

    Bus myBus;
    myBus.get_bus_data();
    myBus.drive();
    myBus.display_bus_data();

    Truck myTruck;
    myTruck.get_truck_data();
    myTruck.load();
    myTruck.display_truck_data();

    SportsCar mySportsCar;
    mySportsCar.get_sports_car_data();
    mySportsCar.race();
    mySportsCar.display_sports_car_data();

    return 0;
}
