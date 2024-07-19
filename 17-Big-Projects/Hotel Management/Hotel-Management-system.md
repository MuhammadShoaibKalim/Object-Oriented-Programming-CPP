# Hotel Reservation System

The Hotel Reservation System is a comprehensive software application designed to manage various aspects of a hotel. This system is built around several classes, each encapsulating different functionalities and entities within the hotel management domain.

## Classes and Their Descriptions

### 1. Customer
- **Purpose**: Manages customer information.
- **Attributes**: Name, contact number, address, room ID, date of arrival, date of departure.
- **Usage**: Enter customer details and display them.

### 2. Room
- **Purpose**: Manages room details.
- **Attributes**: Room number, rent, type, status (available or allocated).
- **Usage**: Enter and display room details.

### 3. Hotel
- **Purpose**: Contains information about the hotel.
- **Attributes**: Name, ID, address.
- **Usage**: Enter and display hotel information.

### 4. Staff
- **Purpose**: Handles staff-related tasks.
- **Tasks**: Check allocated rooms, check available rooms, book rooms, search records.
- **Usage**: Perform various tasks related to room and record management.

### 5. Payment
- **Purpose**: Manages payment details.
- **Attributes**: Bill ID, total bill.
- **Usage**: Handle billing and display balance.

### 6. Housekeeping
- **Purpose**: Represents the housekeeping service in the hotel.
- **Usage**: Provide housekeeping services and display details.

### 7. RoomServiceMeal
- **Purpose**: Represents the room service meal provided to customers.
- **Usage**: Provide room service meals and display details.

### 8. CheckSecurity
- **Purpose**: Handles security-related services in the hotel.
- **Usage**: Provide security alerts and display details.

### 9. Reservation
- **Purpose**: Manages reservation details.
- **Attributes**: Reservation ID, customer ID, room ID, date of arrival, date of departure.
- **Usage**: Enter and display reservation details.

## Main Function Operations

The main function in the system utilizes these classes to perform various operations such as:

- **Managing Hotel Information**: Enter and display hotel details.
- **Managing Room Information**: Enter and display room details.
- **Managing Customer Information**: Enter and display customer details.
- **Performing Staff Tasks**: Check room status, book rooms, and search records.
- **Providing Hotel Services**: Housekeeping, room service meals, and security alerts.
- **Handling Payments**: Manage billing and display balance.
- **Managing Reservations**: Enter and display reservation details.

Each class plays a vital role in ensuring that the hotel management system operates smoothly and efficiently. The system is designed to streamline hotel operations, making it easier to manage rooms, customers, staff tasks, services, payments, and reservations.

## How to Run

1. **Compile the code**:
   ```sh
   g++ main.cpp Customer.cpp Room.cpp Hotel.cpp Staff.cpp Payment.cpp Housekeeping.cpp RoomServiceMeal.cpp CheckSecurity.cpp Reservation.cpp -o HotelReservationSystem
```
Run the executable:
```
./HotelReservationSystem
```
Follow the on-screen instructions to perform various operations within the hotel reservation system.

#### License
This project is licensed under the MIT License - see the LICENSE file for details.

### Acknowledgments
Thanks to everyone who contributed to this project.
Special thanks to the developers of the libraries and tools used.


This `README.md` provides a clear and comprehensive guide to understanding and using the Hotel Reservation System. Adjust the instructions and details according to your specific project setup and requirements.


