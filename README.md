# Object-Oriented Programming (OOP) Using C++: Comprehensive Notes


```
Lecture 01: Introduction to Object-Oriented Programming (OOP) Using C++

Definition: 
OOP is a programming paradigm based on the concept of "objects," which 
can contain data and methods.

Key Concepts:
➡️ Class: Blueprint for creating objects.
➡️ Object: Instance of a class.
➡️ Encapsulation: Bundling data and methods within a class.
➡️ Abstraction: Hiding complex implementation details.
➡️ Inheritance: Deriving new classes from existing ones.
➡️ Polymorphism: Ability to process objects differently based on their 
data type or class.
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
Definition: Special member function that cleans up when an object goes
out of scope.
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
1-Header File (ClassName.h):


#ifndef CLASSNAME_H
#define CLASSNAME_H

class ClassName {
private:
    // Data members
public:
    // Member functions
};

#endif

```

```
2-Source File (ClassName.cpp):

#include "ClassName.h"

// Member function definitions
```

```
3-Main File (main.cpp):


#include "ClassName.h"
int main() {
    ClassName obj;
    return 0;
}
```

**Lecture 10: Mini Projects**
```
Example Projects:

Project 01: Basic student management system.
Project 02: ATM and Banking system.
```

**Lecture 11: Passing and Returning Objects in Functions**
```
Example:

#include <iostream>
using namespace std;

class Example {
public:
    int data;
    Example(int d = 0) : data(d) {}
    Example add(const Example& other) {
        return Example(data + other.data);
    }
};

int main() {
    Example e1(5), e2(10);
    Example e3 = e1.add(e2);
    cout << "Sum: " << e3.data << endl;
    return 0;
}
```

**Lecture 12: Operator Overloading**

```
Definition: Extending the meaning of an operator for user-defined types.
Syntax:

class Complex {
private:
    double real;
    double imag;
public:
    Complex(double r = 0, double i = 0) : real(r), imag(i) {}
    Complex operator + (const Complex& other) const {
        return Complex(real + other.real, imag + other.imag);
    }
    void display() const {
        cout << real << " + " << imag << "i" << endl;
    }
};
```

**Lecture 13: Inheritance**
```
Types:

Single Inheritance: Derived class inherits from one base class.

Multiple Inheritance: Derived class inherits from more than one base class.

Multilevel Inheritance: Derived class inherits from another derived class.

Hierarchical Inheritance: Multiple derived classes inherit from a single 
base class.

Hybrid Inheritance: Combination of two or more types of inheritance.
Example:

class Base {
public:
    void baseFunction() {
        cout << "Base function" << endl;
    }
};

class Derived : public Base {
public:
    void derivedFunction() {
        cout << "Derived function" << endl;
    }
};

int main() {
    Derived obj;
    obj.baseFunction();
    obj.derivedFunction();
    return 0;
}
```

**Lecture 14: Polymorphism**
```
Definition: Ability of a function, object, or method to behave differently based 
on context.

Types:
Compile-time (Static) Polymorphism: Function overloading and operator overloading.
Run-time (Dynamic) Polymorphism: Achieved using inheritance and virtual functions.
```

**Lecture 15: Virtual Functions**
```
Definition: Function in a base class that can be overridden in derived class.

Syntax:
class Base {
public:
    virtual void display() {
        cout << "Base class display" << endl;
    }
};

class Derived : public Base {
public:
    void display() override {
        cout << "Derived class display" << endl;
    }
};

int main() {
    Base* basePtr;
    Derived derivedObj;
    basePtr = &derivedObj;
    basePtr->display(); // Calls Derived class display
    return 0;
}
```
**Lecture 16: Abstract Classes and Pure Virtual Functions**
```
Definition: Abstract class is a class that cannot be instantiated and often 
contains pure virtual functions.

Syntax:
class AbstractClass {
public:
    virtual void pureVirtualFunction() = 0; // Pure virtual function
};

class ConcreteClass : public AbstractClass {
public:
    void pureVirtualFunction() override {
        cout << "Implementation of pure virtual function" << endl;
    }
};
```