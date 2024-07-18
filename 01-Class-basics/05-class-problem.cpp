#include <iostream>
using namespace std;
class A{
    public:
    int a;
    A(int a){
        this->a=a;
    }
    int result(){
        return a;
    }
};
int main() {
    A a(200);
    cout<<a.result()<<endl;
    
    return 0;
}