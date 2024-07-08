#include <iostream>
using namespace std;

class Appliance {
public:
    virtual void turn_on() = 0;
    virtual void turn_off() = 0;
};

class WashingMachine : public Appliance {
public:
    void turn_on() override {
        cout << "Washing machine on" << endl;
    }
    void turn_off() override {
        cout << "Washing machine off" << endl;
    }
};

int main() {
    WashingMachine wm;
    wm.turn_on();
    wm.turn_off();
    return 0;
}
