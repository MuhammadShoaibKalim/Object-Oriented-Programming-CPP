#include <iostream>
using namespace std;
class Array{
    public:
        int data[5];
    public:
        Array(){
            for(int i=0; i<5; ++i)
            {
               data[i]=i+1;
            }
}
        int& operator[](int index){
            if(index<0 || index>4){
                cout<<"Array index out of bound exception"<<endl;
                exit(0);
            }
            return data[index];
        }    

        void show(){
            for(int i=0;i<5;i++){
                cout<<data[i]<<" ";
            }
            cout<<endl;
        }
};

int main() {
       Array arr;

       cout<<" The original array : ";
       arr.show();

       arr[3]=13;
       cout<<" Modified array : ";
       arr.show();
       
    return 0;
}