#include <iostream>
using namespace std;
class Notification{
    public:
    virtual void notify(const string message)=0;
};
class emailNotification:public Notification{
    public:
    void notify(const string message){
        cout<<" Email: "<<message<<endl;
    }

};
int main() {
           emailNotification e;
           e.notify("Hello! man how are doing?");
    
    return 0;
}