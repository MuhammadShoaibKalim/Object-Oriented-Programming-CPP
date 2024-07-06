#include <iostream>
using namespace std;
class Complex {
    public:
        double real;
        double img;
    public:
       Complex( double x=0, double y=0): real(x), img(y){}
    
    friend Complex operator * (const Complex& c,const Complex& c2);
    Complex operator + (const Complex& c) const
    {
                   return Complex(real + c.real , img + c.img);
    }
     Complex operator - (const Complex& c) const
    {
                   return Complex(real + c.real , img + c.img);
    }
  
    void display() const {
                   cout<<real<<" + "<<img<<"i"<<endl;
    }   
};
   Complex operator * (const Complex& c,const Complex& c2) 
    {
                   return Complex( c.real * c2.real -c.img * c2.img, c.real * c2.img +c.img * c2.real );
    }
int main() {
            
            Complex c1(10,2);
            Complex c2(3,10);

             Complex c3=c1+c2;
             c3.display();

             Complex c4=c1-c2;
             c4.display();

             Complex c5=c1*c2;
             c5.display();

             
     
    return 0;
}