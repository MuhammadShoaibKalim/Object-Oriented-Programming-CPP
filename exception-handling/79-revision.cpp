#include<iostream>
#include<math.h>
#define pi 3.1416
using namespace std;

void power_factor(float a)
{
    if(a>1 || a<-1)
        throw(a);
    else
        cout<<"Voltage(V)is lagging from current(I) by "<<(acos(a)*180/pi)<<" degree\n";
}

int main()
{
    float a;
    try
    {
        cout<<" Enter power factor : ";
        cin>>a;
        power_factor(a);
    }
    catch(float b)
    {
        cout<<" Caught an exception \n";
    }
    return 0;
}
