#include <iostream>
#include<fstream>
#include <sstream>
#include<windns.h>
using namespace std;
class Airline{
    private:
        string destination;
        string flight;
        string departure;
        int  seats;
    public:
         Airline(string dep, string f, string des): destination(dep), departure(dep), flight(f) {};
     string set_dep( string departure)
     {
          this->departure=departure;
     } 
     string get_dep () const
     {
         return departure;
     }   
      string set_des(string destination)
       {
         this -> destination=destination;
       }  
     string get_des() const 
       {
         return destination;
       } 
       string set_flight(string flight)
       {
         this->flight=flight;
       }
       string get_flight() const
       {
         return flight;
       }

       int set_seats(int seats)
       {
            this -> seats= seats;
       }
         int get_seats() const
       {
            return seats;
       }
};
int main() {
    

    
    return 0;
}