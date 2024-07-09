# Object-Oriented Programming (OOP) Using C++: Comprehensive Notes


```
Lecture 01: Introduction to Object-Oriented Programming (OOP) Using C++

Definition: 
OOP is a programming paradigm based on the concept of "objects," which can contain data and methods.

Key Concepts:
➡️ Class: Blueprint for creating objects.
➡️ Object: Instance of a class.
➡️ Encapsulation: Bundling data and methods within a class.
➡️ Abstraction: Hiding complex implementation details.
➡️ Inheritance: Deriving new classes from existing ones.
➡️ Polymorphism: Ability to process objects differently based on their data type or class.
```


**Lecture 02: Creating Classes and Objects**
```
Syntax
class ClassName {

    // Access specifiers: private, public, protected

    private:
        // Data members
    public:
        // Member functions
};
int main() {
    ClassName objectName; // Creating an object
    return 0;
}
```

**Lecture 03: Creating Class Member Functions**
```
Definition: Functions defined inside a class.

Syntax:

class ClassName {
private:
    int data;
public:
    void setData(int d) {
        data = d;
    }
    int getData() {
        return data;
    }
};
```
**Lecture 04: Input and Output Methods in Classes**

```
Example:


#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    int age;
    int marks;

public:
    void input() {
        cout << "Enter student's name: ";
        getline(cin, name);
        cout << "Enter student's age: ";
        cin >> age;
        cout << "Enter student's marks: ";
        cin >> marks;
        cin.ignore();
    }

    void output() const {
        cout << "Student's Name: " << name << endl;
        cout << "Student's Age: " << age << endl;
        cout << "Student's Marks: " << marks << endl;
    }
};

int main() {
    Student student;
    student.input();
    student.output();
    return 0;
}

```

**Lecture 05: Setter and Getter function**
```
#include <iostream>
using namespace std;

class Rectangle {
private:
    double width;
    double height;

public:
    void setWidth(double w) {
        width = w;
    }
    double getWidth() const {
        return width;
    }
    
    void setHeight(double h) {
        height = h;
    }
    double getHeight() const {
        return height;
    }
    
    double getArea() const {
        return width * height;
    }
    
    double getPerimeter() const {
        return 2 * (width + height);
    }
};

int main() {
    Rectangle rect;
    rect.setWidth(5.0);
    rect.setHeight(3.0);
    cout << "Width: " << rect.getWidth() << endl;
    cout << "Height: " << rect.getHeight() << endl;
    cout << "Area: " << rect.getArea() << endl;
    cout << "Perimeter: " << rect.getPerimeter() << endl;
    return 0;
}
```

**Lecture 06: Access Specifiers (Private, Public, Protected)**
```
Private: Accessible only within the class.
Public: Accessible from outside the class.
Protected: Accessible within the class and its derived classes.
```

**Lecture 07: Constructor in C++**
```
Definition: Special member function that initializes objects.
Syntax:

class ClassName {
public:
    ClassName() {
        // Constructor code
    }
};
```


**Lecture 08: Destructor in C++**
```
Definition: Special member function that cleans up when an object goes out of scope.
Syntax:

class ClassName {
public:
    ~ClassName() {
        // Destructor code
    }
};
```

**Lecture 09: Placing Class in Separate Files**
```
Header File (ClassName.h):


#ifndef CLASSNAME_H
#define CLASSNAME_H

class ClassName {
private:
    // Data members
public:
    // Member functions
};

#endif
Source File (ClassName.cpp):
```

```
#include "ClassName.h"

// Member function definitions
```