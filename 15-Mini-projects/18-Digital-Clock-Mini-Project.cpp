/*
Write a class name DigitalClock to implement a digital clock in c++. Have
a data member function to provide the functionality of a 12 hours clock.
User input hours Minutes and Seconds. Digital clock displaying its
time in the form of HH: MM: SS am/pm
*/

#include <iostream>
#include <iomanip>
using namespace std;

class DigitalClock {
private:
    int hours, minutes, seconds;
    string period; // AM or PM

public:
    void getTime() {
        cout << "Enter the hours (0-23): ";
        cin >> hours;
        while (hours < 0 || hours > 23) {
            cout << "Invalid hours. Enter again (0-23): ";
            cin >> hours;
        }

        cout << "Enter the minutes (0-59): ";
        cin >> minutes;
        while (minutes < 0 || minutes > 59) {
            cout << "Invalid minutes. Enter again (0-59): ";
            cin >> minutes;
        }

        cout << "Enter the seconds (0-59): ";
        cin >> seconds;
        while (seconds < 0 || seconds > 59) {
            cout << "Invalid seconds. Enter again (0-59): ";
            cin >> seconds;
        }

        // Determine AM or PM
        if (hours >= 12) {
            period = "PM";
            if (hours > 12) hours -= 12;
        } else {
            period = "AM";
            if (hours == 0) hours = 12;
        }
    }

    void displayTime() {
        cout << "Time: "
             << setw(2) << setfill('0') << hours << ":"
             << setw(2) << setfill('0') << minutes << ":"
             << setw(2) << setfill('0') << seconds << " "
             << period << endl;
    }
};

int main() {
    DigitalClock d;
    d.getTime();
    d.displayTime();

    return 0;
}
