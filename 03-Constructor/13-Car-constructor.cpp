#include <iostream>
using namespace std;
class Car{
    private:
        string model;
        int price;
        int year;

    public:
         Car(string m, int y, int p) : model(m), price(p), year(y){}

         void get_details()
          {
               cout<<" Enter the model of car  :";
               cin>>model;
               cout<<" Enter the price of car  :";
               cin>>price;
               cout<<" Enter the year of car  :";
               cin>>year;
          }    

          void show_details()
          {
             cout<<" The car details is : "<<endl;
             cout<<" Model : "<<model<<endl;
             cout<<" Price : "<<price<<endl;
             cout<<" Year : "<<year<<endl;

          }    
};
int main() {
             int m, p;
             string y;
            
             Car civic(y, p, m);
             
             civic.get_details();
             civic.show_details();
             
    
    return 0;
}