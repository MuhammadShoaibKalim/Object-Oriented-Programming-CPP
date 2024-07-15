#include <iostream>
#include <fstream>
#include<sstream>
using namespace std;

class Airline {
private:
    string destination;
    string flight;
    string departure;
    int seats;
public:
    Airline(string dep, string f, string des, int s): departure(dep), flight(f), destination(des), seats(s) {};

    void set_dep(string departure) {
        this->departure = departure;
    } 

    string get_dep() const {
        return departure;
    }

    void set_des(string destination) {
        this->destination = destination;
    }

    string get_des() const {
        return destination;
    } 

    void set_flight(string flight) {
        this->flight = flight;
    }

    string get_flight() const {
        return flight;
    }

    void set_seats(int seats) {
        this->seats = seats;
    }

    int get_seats() const {
        return seats;
    }
    void update(string flight)
    {  
        ifstream in("Flight.txt");
        ofstream out("Flight.txt");
       
       string line;
         while(getline(in, line))
         {
            int postion=line.find(flight);
            if(postion !=string::npos ){
               int current = seats-1;
               seats=current;
               stringstream ss;
               ss<<current;
                string stringCurrent=ss.str();

                int seatPosition=line.find_last_of(":");
                line.replace(seatPosition+2, string::npos,stringCurrent); 
         }

         }
    }
};
void display(){
    ifstream in("Flight.txt");
    if(!in) 
    {
        cout << "File can't be opened...";
    } 
    else 
    {
        string line;
        while (getline(in, line)) {
            cout << line << endl;
        }
        in.close();
    }
}
int main() {
    Airline flight1("F01", "Lahore", "Pakistan", 50);
    Airline flight2("F02", "Lahore", "Pakistan", 51);
    Airline flight3("F03", "Islamabad", "Pakistan", 50);

    ofstream out("Flight.txt");
    if (!out) {
        cout << "File can't be opened...";
    } else {
        out << flight1.get_flight() << " : " << flight1.get_des() << " : " << flight1.get_dep() << " : " << flight1.get_seats() << endl;
        out << flight2.get_flight() << " : " << flight2.get_des() << " : " << flight2.get_dep() << " : " << flight2.get_seats() << endl;
        out << flight3.get_flight() << " : " << flight3.get_des() << " : " << flight3.get_dep() << " : " << flight3.get_seats() << endl;
        cout << "File saved successfully...";
        out.close();
    }
      
      bool exit=false;
      while(!exit)
      {  
          system("cls");
          cout<<"\t\t Welcome to Online reservation system "<<endl;
          cout<<"\t\t 1.Reserve Flights "<<endl;
          cout<<"\t\t 2.exit"<<endl;
          cout<<"\t\t Enter your choice: ";
          
          int choice;
          cin>>choice;
          if(choice==1)
          {
             system("cls");
             display();
             string flight;
             cout<<"\n\t\t Enter flight number: ";
             cin>>flight;
             
             if(flight==flight1.get_flight() && flight1.get_seats()>0)
              {
                  flight1.set_seats(flight1.get_seats()-1);
                  cout<<"\n\t\t Flight reserved successfully!"<<endl;
              }
          }     
      }
    return 0;
}
