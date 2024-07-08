#include <iostream>
#include <vector>
using namespace std;

int main() {
 
    vector<string> fruits = {"Apple", "Banana", "Cherry"};

   
    fruits.push_back("Date");
    fruits.push_back("Elderberry");

  
    cout << " Fruits: ";
    for (int i =0; i <= fruits.size(); i++) {
        cout << fruits[i] << " ";
    }
    cout << endl;

    return 0;
}
