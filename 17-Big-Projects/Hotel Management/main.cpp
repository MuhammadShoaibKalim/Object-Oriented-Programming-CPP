#include <iostream>
#include <string>
#include "Customer.h"
#include "Room.h"
#include "Hotel.h"
#include "Staff.h"
#include "Payment.h"
#include "Housekeeping.h"
#include "RoomServiceMeal.h"
#include "CheckSecurity.h"
#include "Reservation.h"
using namespace std;

int main() {
    string name, address, serviceName, hotel_name, hotel_address;
    int contactno, roomid, serviceID, serviceroomNo, key = 0;
    int room_no, rent, status, task, hotel_id, bill_id, balance = 0;

    while (key != 'q') {
        cout << "Welcome to Hotel Reservation System" << endl;
        cout << "Press 1 to Enter hotel information" << endl;
        cout << "Press 2 to Enter room information" << endl;
        cout << "Press 3 to Enter customer information" << endl;
        cout << "Press 4 to Perform a Task" << endl;
        cout << "Press 5 to enjoy Hotel Service" << endl;
        cout << "Press 6 to show bill" << endl;
        cout << "Press 7 to manage reservations" << endl;
        cin >> key;

        switch (key) {
            case 1: {
                cout << "Enter name of hotel: ";
                cin >> hotel_name;
                cout << "Enter id of hotel: ";
                cin >> hotel_id;
                cout << "Enter address of hotel: ";
                cin >> hotel_address;
                Hotel h(hotel_name, hotel_id, hotel_address);
                cout << "Hotel Information is as follows:" << endl;
                h.show_Hotel();
                break;
            }

            case 2: {
                string type, room_status;
                cout << "Enter room number: ";
                cin >> room_no;
                cout << "Enter rent of room: ";
                cin >> rent;
                cout << "Enter type of room: ";
                cin >> type;
                cout << "Enter status of room (0 for available, 1 for allocated): ";
                cin >> status;
                Room r;
                r.set_room_no(room_no);
                r.set_rent(rent);
                r.set_type(type);
                room_status = (status == 0) ? "available" : "allocated";
                r.set_status(room_status);
                r.show_Room();
                break;
            }

            case 3: {
                int size;
                cout << "Enter number of customers: ";
                cin >> size;
                Customer *c = new Customer[size];
                for (int i = 0; i < size; i++) {
                    cout << "Enter customer " << (i + 1) << " name: ";
                    cin >> c[i].name;
                    cout << "Enter customer " << (i + 1) << " contact number: ";
                    cin >> c[i].contactno;
                    cout << "Enter customer " << (i + 1) << " address: ";
                    cin >> c[i].address;
                    cout << "Enter Customer " << (i + 1) << " room ID: ";
                    cin >> c[i].roomid;
                    cout << "Enter customer " << (i + 1) << " date of arrival: ";
                    cin >> c[i].date_of_arrival;
                    cout << "Enter customer " << (i + 1) << " date of departure: ";
                    cin >> c[i].date_of_departure;
                }
                cout << "Displaying customer details:" << endl;
                for (int i = 0; i < size; i++) {
                    c[i].display();
                }
                delete[] c;
                break;
            }

            case 4: {
                Staff st;
                cout << "Enter task (0 for check allocated rooms, 1 for available rooms, 2 for book a room, 3 for search records): ";
                cin >> task;
                st.task(task);
                if (task == 0) {
                    cout << "Check for allocated rooms" << endl;
                } else if (task == 1) {
                    cout << "Check for available rooms" << endl;
                } else if (task == 2) {
                    cout << "Book a room" << endl;
                } else {
                    cout << "Search for records" << endl;
                }
                break;
            }

            case 5: {
                cout << "Enter 1 for Housekeeping Service " << endl;
                cout << "Enter 2 for Room Service Meal " << endl;
                cout << "Enter 3 for Security alert" << endl;
                cout << "Enter Service ID: ";
                cin >> serviceID;
                cout << "Enter Room Number: ";
                cin >> serviceroomNo;

                if (serviceID == 1) {
                    serviceName = "Housekeeping Service";
                    balance += 500;
                } else if (serviceID == 2) {
                    serviceName = "Room Service Meal";
                    balance += 1000;
                } else if (serviceID == 3) {
                    serviceName = "Security Alert";
                    balance += 200;
                }

                HotelService *service;
                if (serviceID == 1) {
                    service = new Housekeeping(serviceName, serviceID, serviceroomNo);
                } else if (serviceID == 2) {
                    service = new RoomServiceMeal(serviceName, serviceID, serviceroomNo);
                } else if (serviceID == 3) {
                    service = new CheckSecurity(serviceName, serviceID, serviceroomNo);
                }
                service->display();
                delete service;
                break;
            }

            case 6: {
                Payment payment;
                cout << "Enter bill id: ";
                cin >> bill_id;
                payment.setBillId(bill_id);
                payment.setTotalBill(balance);
                cout << "Balance: " << payment.getBalance() << endl;
                break;
            }
        	case 7: {
        		int resID, custID, rID;
			    string arrival, departure;
			    cout << "Enter reservation ID: ";
			    cin >> resID;
			    cout << "Enter customer ID: ";
			    cin >> custID;
			    cout << "Enter room ID: ";
			    cin >> rID;
			    cout << "Enter date of arrival (YYYY-MM-DD): ";
			    cin >> arrival;
			    cout << "Enter date of departure (YYYY-MM-DD): ";
			    cin >> departure;
			    Reservation reservation(resID, custID, rID, arrival, departure);
			    reservation.displayReservationDetails();
			    break;
			}
    
        }
    }
    return 0;
}

