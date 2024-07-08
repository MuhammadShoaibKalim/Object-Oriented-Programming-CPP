#include <iostream>
using namespace std;

class SimpleArray {
private:
    int* arr;
    int size;

public:

    SimpleArray(int s) : size(s) {
        arr = new int[size];
        for (int i = 0; i < size; i++) {
            arr[i] = i * 10;  
        }
        cout << " Array of size " << size << " created." << endl;
    }

 
    ~SimpleArray() {
        delete[] arr;
        cout << " Array of size " << size << " deleted." << endl;
    }

    
    void printArray() const {
        for (int i = 0; i < size; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    
        SimpleArray array(5); 

        cout<<" The array is printed here : ";

        array.printArray();
    
        SimpleArray array2(10);

        cout<<" The array is printed here : ";

        array.printArray();
    
    return 0;
}
