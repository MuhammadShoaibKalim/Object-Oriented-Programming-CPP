#include <iostream>
#include <vector>
using namespace std;

class Bookstore {
private:
    string name;
    string address;
    vector<string> books;

public:
    void setName() {
         cout<<" Enter name of bookstore :";
         cin>> name;
    }
    string getName() const {
        return name;
    }
    
    void setAddress() {
        cout<<" Enter address of bookstore :";
         cin>> address;
    }
    string getAddress() const {
        return address;
    }
    
    void addBook() {
        string book;
        cout << " Enter book name: ";
        cin >> book;
        books.push_back(book);
    }
    vector<string> getBooks() const {
        return books;
    }
    
    void printDetails() const {
        cout << " -------------Input Data------------ " <<endl;
        cout << " Bookstore Name: " << name << endl;
        cout << " Address: " << address << endl;

        cout << " -------------Output Data------------ " <<endl;
        cout << " Books: " << endl;
        for (const string& book : books) {
            cout << " - " << book << endl;
        }
    }
};

int main() {
    Bookstore bookstore;
    bookstore.setName();
    bookstore.setAddress();

    bookstore.getName();
    bookstore.getAddress();


    bookstore.addBook();
    bookstore.addBook();
    
   

    bookstore.printDetails();
    
    return 0;
}
