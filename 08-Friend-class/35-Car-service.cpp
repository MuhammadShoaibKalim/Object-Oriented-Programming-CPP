#include <iostream>
using namespace std;

class Car {
private:
    string make;
    int year;

public:
    Car(string m = "", int y = 0) : make(m), year(y) {}

    void get_details() {
        cout << "Enter the make: ";
        cin >> make;
        cout << "Enter the year: ";
        cin >> year;
    }

    friend class CarService;
};

class CarService {
public:
    void service_details(const Car& car) {
        cout << "Servicing car: " << car.make << " of year: " << car.year << endl;
    }
};

int main() {
    Car car;
    car.get_details();

    CarService cs;
    cs.service_details(car);

    return 0;
}
