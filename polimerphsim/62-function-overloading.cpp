#include <iostream>
using namespace std;
class Parent{
     public:
        void print(int i) {
            cout << "Printing int: " << i << endl;
        }
        
};
int main() {
            Parent *p;
            p = new Parent();
            p->print(12);
            p->print(12.5);
    
    return 0;
}