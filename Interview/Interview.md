# Object Oriented Programming Interview Preparation 

### 1. What is C++ in OOP ?

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
