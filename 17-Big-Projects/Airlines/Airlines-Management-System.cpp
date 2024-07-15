#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <cstdlib>

using namespace std;

class Airline {
private:
    string destination;
    string flight;
    string departure;
    int seats;
public:
    Airline(string dep, string f, string des, int s) : departure(dep), flight(f), destination(des), seats(s) {}

    void set_dep(string departure) {
        this->departure = departure;
    }

    string get_dep() const {
        return departure;
    }

    void set_des(string destination) {
        this->destination = destination;
    }

    string get_des() const {
        return destination;
    }

    void set_flight(string flight) {
        this->flight = flight;
    }

    string get_flight() const {
        return flight;
    }

    void set_seats(int seats) {
        this->seats = seats;
    }

    int get_seats() const {
        return seats;
    }

    void update_seats_in_file(string flight) {
        ifstream in("Flight.txt");
        ofstream temp("Temp.txt");

        string line;
        while (getline(in, line)) {
            size_t position = line.find(flight);
            if (position != string::npos) {
                int seatPosition = line.find_last_of(":");
                string currentSeatsStr = line.substr(seatPosition + 2);
                int currentSeats = stoi(currentSeatsStr);
                if (currentSeats > 0) {
                    currentSeats -= 1;
                }
                line.replace(seatPosition + 2, string::npos, to_string(currentSeats));
            }
            temp << line << endl;
        }

        in.close();
        temp.close();

        remove("Flight.txt");
        rename("Temp.txt", "Flight.txt");

        cout << "Reservation updated successfully..." << endl;
    }
};

void display() {
    ifstream in("Flight.txt");
    if (!in) {
        cout << "File can't be opened..." << endl;
    } else {
        string line;
        while (getline(in, line)) {
            cout << line << endl;
        }
        in.close();
    }
}

int main() {
    Airline flight1("F01", "Lahore", "Pakistan", 50);
    Airline flight2("F02", "Lahore", "Pakistan", 51);
    Airline flight3("F03", "Islamabad", "Pakistan", 50);

    ofstream out("Flight.txt");
    if (!out) {
        cout << "File can't be opened..." << endl;
    } else {
        out << flight1.get_flight() << " : " << flight1.get_des() << " : " << flight1.get_dep() << " : " << flight1.get_seats() << endl;
        out << flight2.get_flight() << " : " << flight2.get_des() << " : " << flight2.get_dep() << " : " << flight2.get_seats() << endl;
        out << flight3.get_flight() << " : " << flight3.get_des() << " : " << flight3.get_dep() << " : " << flight3.get_seats() << endl;
        cout << "File saved successfully..." << endl;
        out.close();
    }

    bool exit = false;
    while (!exit) {
        system("cls");
        cout << "\t\t Welcome to Online reservation system " << endl;
        cout << "\t\t 1. Reserve Flights " << endl;
        cout << "\t\t 2. Exit " << endl;
        cout << "\t\t Enter your choice: ";

        int choice;
        cin >> choice;
        if (choice == 1) {
            system("cls");
            display();
            string flightNumber;
            cout << "\n\t\t Enter flight number: ";
            cin >> flightNumber;

            bool flightFound = false;
            if (flightNumber == flight1.get_flight()) {
                flightFound = true;
                if (flight1.get_seats() > 0) {
                    flight1.update_seats_in_file(flightNumber);
                } else {
                    cout << "Sorry, no seats are available!" << endl;
                }
            } else if (flightNumber == flight2.get_flight()) {
                flightFound = true;
                if (flight2.get_seats() > 0) {
                    flight2.update_seats_in_file(flightNumber);
                } else {
                    cout << "Sorry, no seats are available!" << endl;
                }
            } else if (flightNumber == flight3.get_flight()) {
                flightFound = true;
                if (flight3.get_seats() > 0) {
                    flight3.update_seats_in_file(flightNumber);
                } else {
                    cout << "Sorry, no seats are available!" << endl;
                }
            }

            if (!flightFound) {
                cout << "Flight not found!" << endl;
            }

            system("pause");
        } else if (choice == 2) {
            system("cls");
            exit = true;
            cout << "\n\t\t Thank you for using our system. Goodbye!" << endl;
            system("pause");
        }
    }

    return 0;
}
