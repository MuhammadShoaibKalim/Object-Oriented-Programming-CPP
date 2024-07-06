#include <iostream>
using namespace std;

class Robot {
protected:
    string robotName;
    int batteryLevel;

public:
    Robot(const string &name, int battery) : robotName(name), batteryLevel(battery) {
        cout << "Robot constructor called." << endl;
    }

    void display_robot_data() {
        cout << "Robot name: " << robotName << endl;
        cout << "Battery level: " << batteryLevel << "%" << endl;
    }
};

class Dog {
protected:
    string breed;
    int age;

public:
    Dog(const string &dogBreed, int dogAge) : breed(dogBreed), age(dogAge) {
        cout << "Dog constructor called." << endl;
    }

    void display_dog_data() {
        cout << "Breed: " << breed << endl;
        cout << "Age: " << age << " years" << endl;
    }
};

class RobotDog : public Robot, public Dog {
private:
    string specialFeature;

public:
    RobotDog(const string &name, int battery, const string &dogBreed, int dogAge, const string &feature)
        : Robot(name, battery), Dog(dogBreed, dogAge), specialFeature(feature) {
        cout << "RobotDog constructor called." << endl;
    }

    void display_robotdog_data() {
        display_robot_data();
        display_dog_data();
        cout << "Special feature: " << specialFeature << endl;
    }
};

int main() {
    RobotDog myRobotDog("RoboBuddy", 85, "Labrador", 3, "AI-assisted tricks");
    myRobotDog.display_robotdog_data();

    return 0;
}
