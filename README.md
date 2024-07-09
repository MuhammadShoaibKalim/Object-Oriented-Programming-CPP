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
