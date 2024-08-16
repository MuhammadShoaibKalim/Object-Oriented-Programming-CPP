# Object Oriented Programming Interview Preparation 
#### ( Programming Fundamentals ) 
1. [What is C++ in OOP?](#what-is-c-in-oop)
2. [What is namespace in main file in C++?](#what-is-namespace-in-main-file-in-c)
3. [What is operator overloading in C++?](#what-is-operator-overloading-in-c)
4. [How to learn C++?](#how-to-learn-c)
5. [What is the difference between C and C++?](#what-is-the-difference-between-c-and-c)
6. [What is a Template in C++?](#what-is-a-template-in-c)
7. [What is using namespace std in C++?](#what-is-using-namespace-std-in-c)
8. [What is the return type of a function in C++?](#what-is-the-return-type-of-a-function-in-c)
9. [How are function arguments passed in C++?](#how-are-function-arguments-passed-in-c)
10. [What is a function in C++?](#what-is-a-function-in-c)
11. [What is a Destructor in C++?](#what-is-a-destructor-in-c)
12. [What is Function Overloading in C++?](#what-is-function-overloading-in-c)
13. [What is STL in C++?](#what-is-stl-in-c)
14. [What is type casting in C++?](#what-is-type-casting-in-c)
15. [How to Use a String in C++?](#how-to-use-a-string-in-c)
16. [What is stream in C++?](#what-is-stream-in-c)
17. [What is the difference between structure and class in C++?](#what-is-the-difference-between-structure-and-class-in-c)
18. [How to clear the screen in C++?](#how-to-clear-the-screen-in-c)
19. [How many keywords are there in C++?](#how-many-keywords-are-there-in-c)
20. [What is polymorphism in C++?](#what-is-polymorphism-in-c)
21. [What is inheritance in C++?](#what-is-inheritance-in-c)
22. [What is a virtual function in C++?](#what-is-a-virtual-function-in-c)
23. [What is the difference between early binding and late binding in C++?](#what-is-the-difference-between-early-binding-and-late-binding-in-c)
24. [What is encapsulation in C++?](#what-is-encapsulation-in-c)
25. [What is the difference between function overriding and function overloading in C++?](#what-is-the-difference-between-function-overriding-and-function-overloading-in-c)
26. [What is an abstract class in C++?](#what-is-an-abstract-class-in-c)
27. [What is a pure virtual function in C++?](#what-is-a-pure-virtual-function-in-c)
28. [How do you implement multiple inheritance in C++?](#how-do-you-implement-multiple-inheritance-in-c)
29. [What are the advantages of using OOP in C++?](#what-are-the-advantages-of-using-oop-in-c)
30. [What is the difference between composition and inheritance in C++?](#what-is-the-difference-between-composition-and-inheritance-in-c)
30. [What is a subclass and a superclass?](#what-is-a-subclass-and-a-superclass)  
31. [What is an interface?](#what-is-an-interface)  
32. [What is Static Polymorphism (Compile-Time Polymorphism)?](#what-is-static-polymorphism-compile-time-polymorphism)  
33. [What is Dynamic Polymorphism (Run-Time Polymorphism)?](#what-is-dynamic-polymorphism-run-time-polymorphism)  
34. [What is the difference between overloading and overriding?](#what-is-the-difference-between-overloading-and-overriding)  
35. [How is data abstraction accomplished?](#how-is-data-abstraction-accomplished)  
36. [What is an abstract class?](#what-is-an-abstract-class)  
37. [How is an abstract class different from an interface?](#how-is-an-abstract-class-different-from-an-interface)  
38. [Explain Inheritance with an example.](#explain-inheritance-with-an-example)  
39. [What is an exception?](#what-is-an-exception)  
40. [What is meant by exception handling?](#what-is-meant-by-exception-handling)






### 1. What is C++ in OOP?

C++ is a powerful imperative, general-purpose programming language. It was developed as an extension of the C programming language and provides additional features like object-oriented programming and templates.

C++ is used to develop various applications including operating systems, games, and high-performance software. Its syntax is similar to C which makes it easy for C programmers to transition to C++.


### 2. What is the namespace in the main file in C++? 

In C++, a namespace is a way to group related code under a single name. It helps in organizing code and prevents naming conflicts. By using namespaces, you can avoid clashes between function names or variable names that are used in different parts of a program or external libraries.

Namespaces provide a way to logically separate code and improve code readability and maintainability.

The code is:
```
#include <iostream> // Include the input-output stream library

// Create a namespace called 'myNamespace'
namespace myNamespace {
    void displayMessage() {
        std::cout << "Hello from myNamespace!" << std::endl;
    }
}

int main() {
    // Call the function from myNamespace
    myNamespace::displayMessage();

    // Using 'using' directive to avoid specifying the namespace repeatedly
    using namespace myNamespace;
    displayMessage(); // Now can call the function directly without the namespace

    return 0;
}

```
### 3. What is operator overloading in C++?

Operator overloading in C++ allows an operator to have different behaviors depending on the types of operands used. It enables operators like +, -, * to perform custom operations on user-defined classes.

For example, you can define what happens when you add two objects of a class. This feature helps make code more expressive and readable by allowing operators to work intuitively with user-defined types.

```
#include <iostream>
using namespace std;

int main(){
    // Assignment operators in cpp
    // Declare two variable of int data_Type

    int a = 10, b = 20;
    int result = !(a < b); // it will reverse the answer

    // if the anwer is 1, it will change to 0
    cout<<result <<endl;

    return 0;
}
```

### 4. How to learn c++ ?


### 5. What is the difference between C and C++?
![image](https://github.com/user-attachments/assets/375aeacc-32a7-4fe3-87a1-49757745ad65) 

### 6. What is a Template in C++?
A template in C++ allows you to write generic and reusable code. Templates let you create functions or classes that can operate with any data type, making your code more flexible and avoiding duplication. 
There are two types of templates: **Function Templates** and **Class Templates**.

**1. Function Template:**
```
template <typename T>
T functionName(T arg) {
    // Function implementation
}

```
**2. Class Template:**
```
template <typename T>
class ClassName {
    T member;
public:
    ClassName(T arg) : member(arg) {}
    void display() {
        std::cout << member << std::endl;
    }
};

```
**Example:**
```
#include <iostream>

// Function template for finding the maximum of two values
template <typename T>
T findMax(T a, T b) {
    return (a > b) ? a : b;
}

int main() {
    std::cout << "Max of 3 and 7 is: " << findMax(3, 7) << std::endl;
    std::cout << "Max of 3.5 and 2.1 is: " << findMax(3.5, 2.1) << std::endl;
    return 0;
}
```

```
#include <iostream>

// Class template for a simple storage container
template <typename T>
class Storage {
    T value;
public:
    Storage(T val) : value(val) {}
    void display() {
        std::cout << "Stored value: " << value << std::endl;
    }
};

int main() {
    Storage<int> intStorage(5);
    intStorage.display();

    Storage<double> doubleStorage(3.14);
    doubleStorage.display();

    return 0;
}

```

### 7. What is using namespace std in C++?

Using namespace std is a C++ directive that allows you to access the elements of the std namespace without explicitly specifying it. This means you can directly use cout, endl, and other standard library elements without having to write std::cout, std::endl, etc.

However, using this directive may cause naming conflicts, especially if you have multiple namespaces. It's recommended to avoid using it in larger projects.

### 8. What is the return type of a function in C++?

In C++, a function can return a value of any valid data type, including built-in data types such as int, float, and double, as well as user-defined data types such as classes or structs. The return type of a function is specified in the function declaration by placing the return data type before the name of the function. For example, a function that returns an integer might have the following declaration:

```
int square(int x);
```

which specifies that the function takes an integer argument and returns an integer value.


### 9. How are function arguments passed in C++?  

When a function is called with arguments passed by value, copies of the values of the arguments are made and passed to the function. Any changes made to the arguments within the function do not affect the original values in the calling code.

On the other hand, when a function is called with arguments passed by reference, the memory address of the arguments is passed to the function. This allows the function to directly access and modify the original values of the arguments in the calling code.

It is important to note that passing arguments by reference can have performance advantages over passing by value, especially when working with large objects or data structures. However, passing by value can be useful when you want to ensure that the original values are not modified by the function.  

#### 1. Passing Arguments by Value
When arguments are passed by value, copies of the original values are made and passed to the function. This means that any changes made to the arguments within the function do not affect the original values in the calling code.

**Example:**
```
#include <iostream>

void modifyValue(int x) {
    x = 10; // This change will not affect the original value
}

int main() {
    int num = 5;
    modifyValue(num);
    std::cout << "Value after function call: " << num << std::endl; // Output: 5
    return 0;
}
```
**Explanation:** 

In this example, the modifyValue function takes an integer x by value. Inside the function, changing x does not affect the original num in main().

#### 2. Passing Arguments by Reference
When arguments are passed by reference, the memory address of the arguments is passed to the function, allowing the function to directly modify the original values.

**Example:**

```
#include <iostream>

void modifyValue(int& x) {
    x = 10; // This change will affect the original value
}

int main() {
    int num = 5;
    modifyValue(num);
    std::cout << "Value after function call: " << num << std::endl; // Output: 10
    return 0;
}
```
### 10. What is a function in C++?

In C++, a function is a self-contained block of code that performs a specific task. It can be thought of as a subprogram within a program. Functions are used to organize code, improve code reusability, and modularize the program.

A function has a return type, a name, and zero or more parameters. The return type specifies the data type of the value that the function will return (if any). The name is used to identify and call the function. The parameters are variables that hold values passed into the function.

```
#include <iostream>

// Function that adds two integers and returns the result
int add(int a, int b) {
    return a + b;
}

int main() {
    int num1 = 5;
    int num2 = 10;
    
    // Calling the add function and storing the result
    int sum = add(num1, num2);
    
    // Output the result
    std::cout << "Sum: " << sum << std::endl;

    return 0;
}
```

### 11. What is a Destructor in C++?
A destructor in C++ is a special member function of a class that is called automatically when an object of that class is destroyed. The destructor is responsible for cleaning up resources that the object may have acquired during its lifetime, such as memory, file handles, or network connections.

#### Key Points:
- The destructor has the same name as the class but is preceded by a tilde (~).
- It does not take any arguments and cannot be overloaded.
- It is automatically invoked when an object goes out of scope or is explicitly deleted.
  
**Example:**

```
#include <iostream>

class MyClass {
public:
    // Constructor
    MyClass() {
        std::cout << "Constructor: Object is created." << std::endl;
    }

    // Destructor
    ~MyClass() {
        std::cout << "Destructor: Object is destroyed." << std::endl;
    }
};

int main() {
    MyClass obj; // Object is created, constructor is called
    // Destructor will be called automatically when obj goes out of scope
    return 0;
}
```
In this example, the constructor is responsible for initializing the object's data members, while the destructor is responsible for releasing any memory or resources allocated during the object's lifetime.

### 12. What is Function Overloading in C++?
Function overloading in C++ is a feature that allows multiple functions to have the same name but with different parameter lists (different number of parameters or types of parameters). This allows you to define functions that perform similar tasks but with different input types or numbers of inputs, making the code more flexible and readable.

#### Key Points:
- Same Function Name: The functions have the same name.
- Different Parameter List: The functions differ by the number or type of parameters.
- Compile-time Polymorphism: The correct function to call is determined at compile-time based on the arguments provided.

**Example:**

```
#include <iostream>

// Function to add two integers
int add(int a, int b) {
    return a + b;
}

// Overloaded function to add three integers
int add(int a, int b, int c) {
    return a + b + c;
}

// Overloaded function to add two doubles
double add(double a, double b) {
    return a + b;
}

int main() {
    std::cout << "Sum of 2 and 3: " << add(2, 3) << std::endl;          // Calls the first function
    std::cout << "Sum of 1, 2, and 3: " << add(1, 2, 3) << std::endl;    // Calls the second function
    std::cout << "Sum of 2.5 and 3.5: " << add(2.5, 3.5) << std::endl;  // Calls the third function
    return 0;
}
```

### 13. What is STL in C++?
STL stands for Standard **Template Library**, and it's a powerful library in C++ that provides a collection of classes and functions for managing data structures and algorithms. STL offers a set of template-based tools to work with sequences of data, such as arrays, vectors, and lists, as well as associative containers like maps and sets. STL is divided into three main components:

**Containers**: These are data structures like `vector`, `list`, `map`, and set that store collections of data.

**Algorithms**: These are functions like `sort()`, `find()`, and `accumulate()` that perform operations on the data in containers.

**Iterators**: These act as pointers to elements in containers and allow traversal through the data.

**Example of Using STL:**
```
#include <iostream>
#include <vector>
#include <algorithm> // For sort()

int main() {
    // Create a vector of integers
    std::vector<int> numbers = {5, 2, 9, 1, 7};

    // Sort the vector using the sort algorithm
    std::sort(numbers.begin(), numbers.end());

    // Output the sorted vector
    std::cout << "Sorted numbers: ";
    for (int num : numbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
```

### 14. What is type casting in C++?


Type casting in C++ is a way to convert one data type into another. It helps in ensuring compatibility and flexibility in programming. 
C++ provides two types of casting: **implicit** and **explicit**.

**Implicit casting** is done automatically by the compiler, while **explicit casting** requires the programmer to explicitly convert the data type. This can be useful when working with mixed data types or performing specific operations.

```
int main() {
    int num = 10;
    double result = num; // Implicit casting from int to double
    std::cout << "Result: " << result << std::endl; // Output: 10.0
    return 0;
}
```

```
int main() {
    double num = 9.7;
    int result = (int)num; // Explicit casting from double to int
    std::cout << "Result: " << result << std::endl; // Output: 9
    return 0;
}
```

### 16. How to Use a String in C++?
To use a string in C++, you need to follow these steps:

#### 1. Include the <string> Header

The <string> header provides the std::string class, which allows you to work with strings.

```
#include <iostream>
#include <string> // Include the string header
```
#### 2. Declare a String Variable

You can declare a string variable using the std::string class.

```
std::string myString;
```
#### 3. Assign a Value to the String
You can assign a value to a string variable either at the time of declaration or later.

```
myString = "Hello, World!";
// or
std::string anotherString = "Welcome to C++";
```
#### 4. Perform String Operations
You can perform various operations on strings, such as concatenation, finding the length, accessing characters, and more.

**Concatenation:**

```
std::string firstName = "John";
std::string lastName = "Doe";
std::string fullName = firstName + " " + lastName; // Concatenate strings
```
**Finding Length:**

```
int length = fullName.length(); // Get the length of the string
```

**Accessing Characters:**

```
char firstLetter = fullName[0]; // Access the first character of the string
```
#### 5. Output the String
You can print the string to the console using std::court.

```
std::cout << fullName << std::endl;
```

**Example Program:**

```
#include <iostream>
#include <string>

int main() {
    std::string firstName = "John";
    std::string lastName = "Doe";
    std::string fullName = firstName + " " + lastName; // Concatenate strings
    
    std::cout << "Full Name: " << fullName << std::endl;
    std::cout << "Length of Full Name: " << fullName.length() << std::endl;
    std::cout << "First Character: " << fullName[0] << std::endl;
    
    return 0;
}
```
### 17. What is stream in C++?

A stream in C++ is an abstraction that allows input and output operations. It represents a sequence of characters that are read from or written to a specific device such as the console or a file.

Streams provide a convenient way to handle input and output in a standardized manner. There are different types of streams such as the standard input stream (cin) and the standard output stream (count).

#### Types of Streams:

**Input Stream (std::istream):**

Used for reading data.

**Example:** std::cin for reading input from the console.

**Output Stream (std::ostream):**

Used for writing data.
**Example:** std::cout for writing output to the console.

**Commonly Used Streams:**

**std::cin:** Standard input stream, typically connected to the keyboard.

**std::cout:** Standard output stream, typically connected to the console.

**std::cerr:** Standard error stream, used for displaying error messages.

**std::ofstream:** Output file stream, used for writing data to a file.

**std::ifstream:** Input file stream, used for reading data from a file.

```
#include <iostream>
#include <fstream>
#include <string>

int main() {
    // Using standard input and output streams
    std::string name;
    std::cout << "Enter your name: ";
    std::cin >> name; // Reading input using std::cin
    std::cout << "Hello, " << name << "!" << std::endl; // Writing output using std::cout
    
    // Using file streams
    std::ofstream outFile("output.txt"); // Creating an output file stream
    if (outFile.is_open()) {
        outFile << "This is a line written to a file."; // Writing to a file
        outFile.close(); // Closing the file
    }

    std::ifstream inFile("output.txt"); // Creating an input file stream
    if (inFile.is_open()) {
        std::string line;
        std::getline(inFile, line); // Reading a line from the file
        std::cout << "Read from file: " << line << std::endl;
        inFile.close(); // Closing the file
    }

    return 0;
}
```
### 18. What is the difference between structure and class in C++?

![image](https://github.com/user-attachments/assets/5eb03ebe-f711-484f-a4bd-f37a8da1bdaa)

### 19. How to clear the screen in C++? 

To clear the screen in a C++ program, you can use a system-specific command with the system function from the standard library. This approach is platform-dependent, so the command will vary depending on 
whether you're using Windows or a Unix-like system (Linux, macOS).

```
#include <iostream>
#include <cstdlib> // Required for system()

int main() {
    std::cout << "This is a sample text on the screen." << std::endl;

    // Clear the screen
    #ifdef _WIN32
        system("cls"); // Clear screen command for Windows
    #else
        system("clear"); // Clear screen command for Unix/Linux/macOS
    #endif

    std::cout << "The screen has been cleared!" << std::endl;

    return 0;
}
```

### 20. How many keywords are there in C++?


There are a total of 95 reserved keywords in C++. These keywords have special meanings and cannot be used for re-definition or overloading.

Some examples of these keywords include "alignas", "auto", "bool", "class", "double", "for", "if", "namespace", "return", and "while".

-----------------------------------//////////////////---------------------/////////////////////--------------------///////////////-----------------///////---------------------------
### 21. 1. What is the need for OOP and what are some major Object Oriented Programming languages?
There are many reasons why OOPs are mostly preferred, but the most important among them are: 

- OOPs help users to understand the software easily, although they don’t know the actual implementation.
- With OOPs, the readability, understandability, and maintainability of the code increase multifold.
- Even very big software can be easily written and managed easily using OOPs.

The programming languages that use and follow the Object-Oriented Programming paradigm or OOPs, are known as Object-Oriented Programming languages.
Some of the major Object-Oriented Programming languages include:

- Java
- C++
- Javascript
- Python
- PHP
And many more.

### 21. What are classes and objects in C++?
A class is like a blueprint of an object. It is a user-defined data type with data members and member functions and is defined with the keyword class.
![image](https://github.com/user-attachments/assets/04e3a662-c447-42a3-9b2c-f18bc5ec5647)
You define objects as an instance of a class. Once it creates the object, then it can operate on both data members and member functions.

### 22. What are access modifiers and what does the term OOP mean?
You use access modifiers to define accessibility for the class members. It defines how to access the members of the class outside the class scope.
These access specifiers also play a very vital role in achieving Encapsulation - one of the major features of OOPs. Which are used to control or specify the accessibility of entities like classes, methods, etc
There are three types of access modifiers:

- Private
- Public
- Protected

OOPs, refer to Object-Oriented Programming. It is the programming paradigm that is defined using objects. Objects can be considered as real-world instances of entities like class, that have some characteristics and behaviors.

### 23.   What are some other programming paradigms other than OOPs?
Programming paradigms refer to the method of classification of programming languages based on their features. There are mainly two types of Programming Paradigms:

- Imperative Programming Paradigm
- Declarative Programming Paradigm
Now, these paradigms can be further classified based:
#### 1. Imperative Programming Paradigm:
Imperative programming focuses on HOW to execute program logic and defines control flow as statements that change a program state. This can be further classified as:

**a) Procedural Programming Paradigm:** Procedural programming specifies the steps a program must take to reach the desired state, usually read in order from top to bottom.

**b) Object-Oriented Programming or OOP:** Object-oriented programming (OOP) organizes programs as objects, that contain some data and have some behavior.

**c) Parallel Programming:** The parallel programming paradigm breaks a task into subtasks and focuses on executing them simultaneously at the same time.

#### 2. Declarative Programming Paradigm: 
Declarative programming focuses on WHAT to execute and defines program logic, but not a detailed control flow. Declarative paradigm can be further classified into:

**a) Logical Programming Paradigm:** The Logical programming paradigm is based on formal logic, which refers to a set of sentences expressing facts and rules about how to solve a problem.

**b) Functional Programming Paradigm:** Functional programming is a programming paradigm where programs are constructed by applying and composing functions.

**c) Database Programming Paradigm:** Database programming model is used to manage data and information structured as fields, records, and files.

![image](https://github.com/user-attachments/assets/243748dc-ee3d-412e-ae5e-3db9b9cf01b2)

### 24. What is meant by Structured Programming?
Structured Programming refers to the method of programming that consists of a completely structured control flow. Here structure refers to a block, which contains a set of rules, and has a definitive control flow, such as (if/then/else), (while and for), block structures, and subroutines.

Nearly all programming paradigms include Structured programming, including the OOP mode

### 25. What are the main features of OOPs?
OOPs or Object Oriented Programming mainly comprises the below four features, and make sure you don't miss any of these:

- Inheritance
- Encapsulation
- Polymorphism
- Data Abstraction
![image](https://github.com/user-attachments/assets/87e895fb-848c-4da9-834c-5ef17a535e08)
 
### 26. What are some advantages of using OOPs?
1. OOPs are very helpful in solving very complex level of problems.
2. Highly complex programs can be created, handled, and maintained easily using object-oriented programming.
3. OOPs, promote code reuse, thereby reducing redundancy.
4. OOPs also help to hide unnecessary details with the help of Data Abstraction.
5. OOPs, are based on a bottom-up approach, unlike the Structural programming paradigm, which uses a top-down approach.
6. Polymorphism offers a lot of flexibility in OOPs

### 27. Why are OOPs so popular?
OOPs programming paradigm is considered as a better style of programming. Not only it help in writing a complex piece of code easily, but it also allows users to handle and maintain them easily as well. Not only that, the main pillar of OOPs - Data Abstraction, Encapsulation, Inheritance, and Polymorphism, makes it easy for programmers to solve complex scenarios. As a result these, OOPs are so popular.

### 28. Are there any limitations of Inheritance?
Yes, with more powers comes more complications. Inheritance is a very powerful feature in OOPs, but it has some limitations too. Inheritance needs more time to process, as it needs to navigate through multiple classes for its implementation. Also, the classes involved in Inheritance - the base class and the child class, are very tightly coupled together. So if one needs to make some changes, they might need to do nested changes in both classes. Inheritance might be complex for implementation, as well. So if not correctly implemented, this might lead to unexpected errors or incorrect outputs.

### 29.  What are the types of Inheritance? 
![image](https://github.com/user-attachments/assets/28fae9d0-04cc-4dec-8bda-e3e929c4d1a8)

### 30. What is a subclass and a superclass?
The subclass is a part of Inheritance. The subclass is an entity, which inherits from another class. It is also known as the child class.
Superclass is also a part of Inheritance. The superclass is an entity, which allows subclasses or child classes to inherit from itself.  
 ![image](https://github.com/user-attachments/assets/a56bce5b-e451-462c-aa2c-90f53b3d4fdd)

What is an interface?
An interface refers to a special type of class, which contains methods, but not their definition. Only the declaration of methods is allowed inside an interface. To use an interface, you cannot create objects. Instead, you need to implement that interface and define the methods for their implementation.  
```
#include <iostream>
using namespace std;

// Define an interface using an abstract class
class Animal {
public:
    // Pure virtual function
    virtual void makeSound() = 0;
};

// Implement the interface in a derived class
class Dog : public Animal {
public:
    void makeSound() override {
        cout << "Woof!" << endl;
    }
};

class Cat : public Animal {
public:
    void makeSound() override {
        cout << "Meow!" << endl;
    }
};

int main() {
    // Since Animal is an abstract class, we cannot create objects of it
    // Animal animal; // This would cause a compilation error

    // Create objects of classes implementing the interface
    Dog myDog;
    Cat myCat;

    // Call the implemented methods
    myDog.makeSound(); // Outputs: Woof!
    myCat.makeSound(); // Outputs: Meow!

    return 0;
}
```
### 31.  Static Polymorphism (Compile-Time Polymorphism)
Static Polymorphism occurs when the function or operator that is invoked is determined at compile time. This is often achieved through:

**Function Overloading:** Having multiple functions with the same name but different parameter lists.

**Operator Overloading:** Defining how operators behave with user-defined types.
In static polymorphism, the appropriate function to call is determined at compile time-based on the function signature.

**Example of Function Overloading:**
```
#include <iostream>
using namespace std;

class Calculator {
public:
    // Function to add two integers
    int add(int a, int b) {
        return a + b;
    }

    // Function to add three integers
    int add(int a, int b, int c) {
        return a + b + c;
    }

    // Function to add two doubles
    double add(double a, double b) {
        return a + b;
    }
};

int main() {
    Calculator calc;

    cout << calc.add(10, 20) << endl;        // Calls add(int, int)
    cout << calc.add(10, 20, 30) << endl;    // Calls add(int, int, int)
    cout << calc.add(10.5, 20.5) << endl;    // Calls add(double, double)

    return 0;
}
```


### 32.  Dynamic Polymorphism (Run-Time Polymorphism)
Dynamic Polymorphism occurs when the function to be called is determined at runtime. This is typically achieved through method overriding, where a derived class provides a specific implementation of a method that is already defined in its base class.

To achieve dynamic polymorphism in C++, you use virtual functions.

**Example of Dynamic Polymorphism Using Virtual Functions:**
```
#include <iostream>
using namespace std;

class Animal {
public:
    virtual void makeSound() {
        cout << "Animal sound" << endl;
    }
};

class Dog : public Animal {
public:
    void makeSound() override {
        cout << "Woof!" << endl;
    }
};

class Cat : public Animal {
public:
    void makeSound() override {
        cout << "Meow!" << endl;
    }
};

void playSound(Animal* animal) {
    animal->makeSound();  // Calls the appropriate method at runtime
}

int main() {
    Animal* myDog = new Dog();
    Animal* myCat = new Cat();

    playSound(myDog);  // Outputs: Woof!
    playSound(myCat);  // Outputs: Meow!

    delete myDog;
    delete myCat;

    return 0;
}

```

### 33.  What is the difference between overloading and overriding?
Overloading is a compile-time polymorphism feature in which an entity has multiple implementations with the same name. For example, Method overloading and Operator overloading.

Overriding is a runtime polymorphism feature in which an entity has the same name, but its implementation changes during execution. For example, Method overriding.
Image

### 34. How is data abstraction accomplished?
Data abstraction is accomplished with the help of abstract methods or abstract classes.

### 35. What is an abstract class?
An abstract class is a special class containing abstract methods. The significance of an abstract class is that the abstract methods inside it are not implemented and are only declared. So as a result, when a subclass inherits the abstract class and needs to use its abstract methods, they need to define and implement them. 

### 36. How is an abstract class different from an interface?
Interface and abstract classes both are special types of classes that contain only the methods declaration and not their implementation. However, the interface is entirely different from an abstract class. The main difference between the two is that when an interface is implemented, the subclass must define all its methods and provide its implementation. Whereas in object-oriented programming, when a subclass inherits from an abstract class with abstract methods, the subclass is generally required to provide concrete implementations for all of those abstract methods in the abstract class unless the subclass itself is declared as abstract.

Also, an abstract class can contain abstract methods as well as non-abstract methods. 

### 37. Explain Inheritance with an example.
Inheritance is one of the major features of object-oriented programming, by which an entity inherits some characteristics and behaviors of some other entity and makes them their own. Inheritance helps to improve and facilitate code reuse.

Let me explain to you with a common example. Let's take three different vehicles - a car, truck, or bus. These three are entirely different from one another in their specific characteristics and behavior. But. in all three, you will find some common elements, like the steering wheel, accelerator, clutch, brakes, etc. Though these elements are used in different vehicles, still they have features that are common among all vehicles. This is achieved with inheritance. The car, the truck, and the bus have all inherited the features like steering wheel, accelerator, clutch, brakes, etc, and used them as their own. Due to this, they did not have to create these components from scratch, thereby facilitating code reuse.
![image](https://github.com/user-attachments/assets/3914d579-a222-48fe-96ba-30548e8fd24d)

### 38. What is an exception?
An exception can be considered as a special event, which is raised during the execution of a program at runtime, that brings the execution to a halt. The reason for the exception is mainly due to a position in the program, where the user wants to do something for which the program is not specified, like undesirable input. 

### 39. What is meant by exception handling?
No one wants its software to fail or crash. Exceptions are the major reason for software failure. The exceptions can be handled in the program beforehand and prevent the execution from stopping. This is known as exception handling.
So exception handling is the mechanism for identifying the undesirable states that the program can reach and specifying the desirable outcomes of such states.
Try-catch is the most common method used for handling exceptions in the program. 

### 40. What is meant by Garbage Collection in the OOPs world?
Object-oriented programming revolves around entities like objects. Each object consumes memory and there can be multiple objects of a class. So if these objects and their memories are not handled properly, then it might lead to certain memory-related errors and the system might fail.

Garbage collection refers to this mechanism of handling the memory in the program. Through garbage collection, the unwanted memory is freed up by removing the objects that are no longer needed. 

