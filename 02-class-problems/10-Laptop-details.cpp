#include <iostream>
using namespace std;

class Laptop {
private:
    string brand;
    string model;
    double price;

public:
    void setBrand(string b) {
        brand = b;
    }
    string getBrand() const {
        return brand;
    }
    
    void setModel(string m) {
        model = m;
    }
    string getModel() const {
        return model;
    }
    
    void setPrice(double p) {
        price = p;
    }
    double getPrice() const {
        return price;
    }
    
    void printDetails() const {
        cout << "Brand: " << brand << endl;
        cout << "Model: " << model << endl;
        cout << "Price: $" << price << endl;
    }
};

int main() {
    Laptop laptop;
    laptop.setBrand("Dell");
    laptop.setModel("XPS 13");
    laptop.setPrice(999.99);
    
    laptop.printDetails();
    
    return 0;
}
