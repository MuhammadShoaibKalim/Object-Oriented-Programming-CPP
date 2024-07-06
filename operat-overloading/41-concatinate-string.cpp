#include <iostream>
#include <string>
using namespace std;

class StringConcat {
private:
    string str;

public:
    StringConcat(string s = "") : str(s) {}

    StringConcat operator + (const StringConcat& other) const {
        return StringConcat(str + other.str);
    }

    void display() const {
        cout << "Concatenated String: " << str << endl;
    }
};

int main() {
    StringConcat s1("Hello, ");
    StringConcat s2("world!");

     
  
    StringConcat result = s1 + s2;
    result.display(); 

    return 0;
}
