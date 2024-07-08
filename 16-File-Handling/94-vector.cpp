#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v;

    v.push_back(12);
    v.push_back(14);
    v.push_back(13);
    v.push_back(15);

    cout<<" After adding :";

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }

    v.pop_back();

    cout<<" \n After removing :";
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    

    


    return 0;
}