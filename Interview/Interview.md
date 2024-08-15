# Object Oriented Programming Interview Preparation 

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

### 1. what-is-c-in-oop ?

C++ is a powerful imperative, general-purpose programming language. It was developed as an extension of the C programming language and provides additional features like object-oriented programming and templates.

C++ is used to develop various applications including operating systems, games, and high-performance software. Its syntax is similar to C which makes it easy for C programmers to transition to C++.


### 2. What is namespace in main file in C++?

In C++, a namespace is a way to group related code under a single name. It helps in organizing code and prevents naming conflicts. By using namespaces, you can avoid clashes between function names or variable names that are used in different parts of a program or in external libraries.

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


