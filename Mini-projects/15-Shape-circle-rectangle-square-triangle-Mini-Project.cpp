/*
Circle : A=πr2     = 3.145*x*x
Rectangle=wl       = x*y 
Triangle= ½*h*b    = x*y
1/2=0.5
Square=s*s         = x*x
s=side=height  
*/
#include <iostream>
using namespace std;
class Shape{
    protected:
       double x;
       double y;
    public:
          virtual void get_data()=0;
          virtual void show_area()=0;

};
class Circle :public Shape{
    public:
        void get_data(){
            cout<<"Enter the radius of the circle: ";
            cin>>x;
        }
        void show_area(){
            cout<<"Area of the circle is: "<<3.14*x*x<<endl;
        }

};
class Rectangle :public Shape{
    public:
        void get_data(){
            cout<<"Enter the length of the rectangle: ";
            cin>>x;
            cout<<"Enter the width of the rectangle: ";
            cin>>y;
        }
        void show_area(){
            cout<<"Area of the rectangle is: "<<x*y<<endl;
        }
};
class Triangle :public Shape{
    public:
        void get_data(){
            cout<<"Enter the height of the triangle: ";
            cin>>x;
            cout<<"Enter the base of the triangle: ";
            cin>>y;
        }
        void show_area(){
            cout<<"Area of the triangle is: "<<0.5*x*y<<endl;
        }
};
class Square :public Shape{
    public:
        void get_data(){
            cout<<"Enter the side of the square: ";
            cin>>x;
        }
        void show_area(){
            cout<<"Area of the square is: "<<x*x<<endl;
        }
};

int main() {
        Square square;
        Triangle  triangle;
        Rectangle rectangle;
        Circle circle;

        Shape* shape[4];
        shape[0]=&square;
        shape[1]=&triangle;
        shape[2]=&rectangle;
        shape[3]=&circle;
        
        cout<<"cls";
        cout<<" Please enter your choice : "<<endl;
        cout<<" 1. Area of Circle "<<endl;
        cout<<" 2. Area of Rectangle "<<endl;
        cout<<" 3. Area of Triangle "<<endl;
        cout<<" 4. Area of Square "<<endl;
        cout<<" 5. Exit "<<endl;

        int choice;
        cout<<"Enter your choice: ";
        cin>>choice;
        while(choice!=5){
            switch(choice){
                case 1:
                    shape[3]->get_data();
                    shape[3]->show_area();
                    break;
                case 2:
                    shape[2]->get_data();
                    shape[2]->show_area();
                    break;
                case 3:
                    shape[1]->get_data();
                    shape[1]->show_area();
                    break;
                case 4:
                    shape[0]->get_data();
                    shape[0]->show_area();
                    break;
                default:
                    cout<<"Invalid choice"<<endl;
            }
            cout<<"Enter your choice: ";
            cin>>choice;
        }



       
        
       

        cout<<endl;



    
    return 0;
}