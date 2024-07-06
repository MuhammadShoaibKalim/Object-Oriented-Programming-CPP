#include <iostream>
using namespace std;
class WithDraw{
    private:
     float balance;
    public:
       WithDraw(float b): balance(b){};

       bool withdra(float amount){
         if(amount>balance)
         {
            cout<<" Insufficient balance..";
            throw(0);
         }
         else{
            amount-=balance;
            cout<<"Withdrawal Successful. Remaining balance: "<<amount<<endl;
            return true;
         }
       } 
};
int main() {
       float balance = 1000.0f;
       WithDraw d(balance);
       float amount;
       
    try
    {
        cout<<" Enter amount withdraw :";
        cin>>amount;
        d.withdra(amount);
    }
    catch(float ex)
    {
        cout<<" an exception occure...\n";
    }
    
    
    return 0;
}