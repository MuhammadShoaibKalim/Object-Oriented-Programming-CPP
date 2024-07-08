#include <iostream>
using namespace std;
class Temperature {
    public:
        void convert_temperature(float temp_cel)
        {
          if(temp_cel<-273.15 || temp_cel>1000)
             throw(temp_cel);
          else{
            float Fahrenheit=temp_cel*9/5+32;
              cout << "Temperature in Fahrenheit: " << Fahrenheit <<"`f "<< endl;   
             }
        }
};
int main() {

   float celcius;
   Temperature obj;
   
   try
   {
    cout << "Enter temperature in Celsius: ";
    cin >> celcius;
    obj.convert_temperature(celcius);
   }
   catch(float ex)
   {  
     cout<<" caught an exception in out range. \n";
   }
   
    
    return 0;
}