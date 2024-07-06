#include <iostream>
using namespace std;
class Phone{
       protected:
           string model;
           int betLife;
    public:
          Phone(int b, string m): betLife(b), model(m){
            cout<<" Phone constructor is called. "<<endl;
          }
          void show_phone_data()
          {
            cout<<"Model: "<<model<<endl;
            cout<<"Battery Life: "<<betLife<<endl;
          }
};
class Camera{
      protected:
          int resolution;
      public:
          Camera(int r): resolution(r){
            cout<<" The camera constructor is called. "<<endl;
          }
          void show_camera_data(){
            cout<<"Resolution: "<<resolution<<endl;
          }
};
class SmartPhone : public Phone, public Camera{
    private:
          string os;
     public:
          SmartPhone(  int bet, const string &model, int res, const string &operating  )
          : Phone(bet, model ), Camera( res), os(operating) {
            cout<<" SmartPhone constructor is called. "<<endl;
          }  

          
          void show_smart_phone_data(){
                      show_phone_data();
                      show_camera_data();
            cout<<"OS: "<<os<<endl;
          }
            
};


int main() {
         SmartPhone smrt( 20,"IPhone 13 pro", 12, "IOS");
         smrt.show_smart_phone_data();
      
    return 0;
}