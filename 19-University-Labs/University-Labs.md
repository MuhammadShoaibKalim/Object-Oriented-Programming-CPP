# Object-Oriented Programming (OOP) Course

Welcome to the Object-Oriented Programming (OOP) course repository. This repository contains various lab programs and their corrections as part of the university curriculum.

## Contents

### Week 1: Recall Application
- **Task**: Write a C++ program that defines two functions: input and processing. The input function is meant to take input of 20 integers in an array, and the processing function displays the number of even and odd numbers in that array.
- **Correction-01**: Prime number checking program.

### Week 2: Class (Basic) Application
- **Task**: Write a C++ program that defines a class for an employee. The class should have four data members for the employee's name, Id, age in the year 2020, and retirement year. Define three member functions in the class: one of which should take input of the first three data members, the second method should calculate the retirement year for the employee (provided the retirement age is 60 years), and the third method should display the name, Id, age, and retirement year of the employee.
- **Correction-02**: Class constructor and method definition program.

### Week 3: Class Application
- **Task**: Write a program that creates a class to display Utility_Bill. The class should take customer name, bill number, units consumed, and customer address as inputs and display the input values and the bill amount, which is calculated after multiplying the units consumed with the per unit price. If units consumed are less than 300, the per unit price is Rs. 8; if greater than or equal to 300 but less than 1000, the per unit price is Rs. 5. If units consumed are greater than 999, the per unit price is Rs. 14.
- **Correction-03**: Book class with getdata and putdata methods.

### Week 4: Array of Objects Application
- **Task**: Write a C++ program that creates a class to take and display details of a student. It takes input for the student's name, id, marks, and CGPA. Create an array of objects for 8 students and display the details of the student who took the highest marks among the 8 students.
- **Correction-04**: No correction file for this lab.

### Week 5: Operator Overloading Application
- **Task**: Write a program that implements a class to multiply and divide two rational numbers using operator overloading. The class should have two data members for denominator and numerator values. It should also have a parameterized constructor to initialize the values of one object and a copy constructor to initialize the second object through a previously created object. The class should have a method to take inputs of denominator and numerator from the user. It should also contain a static member to keep the count of the objects of rational numbers. Display the output after performing multiplication and division. Implement a check to ensure that the value of the denominator should not be entered as zero.
- **Correction-05**: Post-increment Time class program.

### Week 6: Composition/Aggregation Application
- **Task**: Write a C++ program that creates a class named Car. It has an object of user-defined type called Engine. The Engine has engine_number as a data member which is set in the constructor of class Engine. The class Car has an aggregation relationship with another user-defined class called Passenger which has passenger_name as its data member. Create an object of class Car that displays the engine number and a passenger name on the screen.
- **Correction-06**: Post-increment Time class program.

### Week 9: Inheritance Application
- **Task**: Write a C++ program that implements a class hierarchy having a base class named Employee and a derived class named Adhoc_employee. The base class has data members of Name, Id, Number of working hours, and Per hour salary. The derived class implements two methods named salary and display_info. The salary method calculates the salary of the employee by multiplying “Number of working hours” by “Per hour salary”. The display_info method displays the complete information of the employee. Create an object of Adhoc_employee and display the information and salary against that instance.
- **Correction-09**: Person and MathsTeacher class program.

### Week 10: Multiple Inheritance Application
- **Task**: Write a C++ program that implements multiple inheritance through a class hierarchy having four classes: Course, IT, CS, SOS_course where IT and CS are inherited from Course, and SOS_Course is inherited from IT and CS. The Course class has an attribute course Id and an input() method that takes input of course Id from the user. Each child class in the hierarchy implements a display() method that displays the course Id. Declare an object of SOS_Course and display the course Id set by the user.
- **Correction-10**: No correction file for this lab.

### Week 11: Polymorphism Application
- **Task**: Write a C++ program that defines four classes named: Shape, Triangle, Rectangle, and Circle where Shape is the parent class of the rest of the three classes. Class Shape has a method named area which is overridden in child classes. This method calculates and displays the area of its respective type. The program displays areas of all the shapes through polymorphism. (Area of triangle= (base* height) /2: area of circle = 3.1415 * (square of radius); area of rectangle = length * width).
- **Correction-11**: Polymorphic method call program.

### Week 12: Abstract Class Polymorphism Application
- **Task**: Write a C++ program having three classes named: Vehicle, Four_Wheeler, Two_Wheeler where Vehicle is parent class of the latter two classes. The Vehicle class has two data members named mileage and manufacturer. It also has a pure virtual function named first_maintenance() that displays appropriate message (in its overridden versions in derived classes) if the maintenance of the vehicle is due or not according (maintenance is due if the mileage of vehicle reaches 5000 km or above for four wheeler and 2000 km or above for two wheeler). Vehicle class also has a display function that displays the mileage and manufacturer of the vehicle. Create one Four_Wheeler object, named car, and one Two_Wheeler object, named bike. Display the mileage and manufacturer of both vehicles (car and bike) polymorphically. Also display appropriate messages in case the vehicles need maintenance or not.
- **Correction-12**: Abstract class with pure virtual function program.

## How to Use This Repository
Each folder contains the respective week's task and correction files. You can explore each folder to understand the concepts and solutions provided.

## Contributing
If you find any issues or have suggestions for improvements, feel free to create a pull request or open an issue.

## License
This project is licensed under the MIT License.

