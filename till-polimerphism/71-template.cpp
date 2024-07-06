#include <iostream>
using namespace std;

// Function template
template <typename T>
T add(T a, T b) {
    return a + b;
}

int main() {
    cout << "Addition of integers: " << add<int>(5, 10) << endl;           
    cout << "Addition of doubles: " << add<double>(5.5, 10.3) << endl;    
    cout << "Addition of strings: " << add<string>("Hello, ", "World!") << endl; 
    return 0;
}


