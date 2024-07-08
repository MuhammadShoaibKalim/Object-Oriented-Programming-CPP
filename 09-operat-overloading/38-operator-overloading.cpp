// increment, decrement

#include <iostream>
using namespace std;
class Counter
{
public:
    int count;

public:
    Counter(int c = 0) : count(c){};

    Counter operator++()
    {
        return Counter(++count);
    }
     Counter operator ++ (int)
    {
        Counter temp(count);
        count++;
        return temp;
    }

     Counter operator -- ()
    {
        return Counter(--count);
    }

   Counter operator--(int)
    {
        Counter temp(count);
        count--;
        return temp;
    }

    void display()
    {
        cout << " Counter : " << count<<endl;
    }
};
int main()
{
    Counter c1(10);
    
    cout<<" Prefix increment "<<endl;
    ++c1;
    c1.display();

      cout<<" Post increment "<<endl;
    c1++;
    c1.display();


      cout<<" Postfix decrement "<<endl;
    c1--;
    c1.display(); 

      cout<<" Prefix decrement "<<endl;
    --c1;
    c1.display();
   
    
    return 0;
}