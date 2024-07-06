/*
Imagine a publishing company that markets both book and audio cassettes. 

1-Create a class Publication that stores the price (float type) of a publication.

2-From this class drive two classes Book which adds a page count(type int) and 
Tape which adds a playing time in minutes (type float).

3- Each of these three classes should have a getData function to get its data from  
the user at the keyboard and a putData() function to display its data object.

4- Write a main() function to test Book and Tape classes by creating objects of them 
and then display the data.
*/
#include <iostream>
using namespace std;

class Publication {
protected:
    float price;
public:
    virtual void get_data() {
        cout << "Enter price of publication: ";
        cin >> price;
    }

    virtual void put_data() const {
        cout << "Publication Price: " << price << endl;
    }
};

class Book : public Publication {
private:
    int pageCount;
public:
    void get_data() override {
        Publication::get_data();
        cout << "Enter page count: ";
        cin >> pageCount;
    }

    void put_data() const override {
        Publication::put_data();
        cout << "Page Count: " << pageCount << endl;
    }
};

class Tape : public Publication {
private:
    float playingTime;
public:
    void get_data() override {
        Publication::get_data();
        cout << "Enter playing time in minutes: ";
        cin >> playingTime;
    }

    void put_data() const override {
        Publication::put_data();
        cout << "Playing Time: " << playingTime << " minutes" << endl;
    }
};

int main() {
    Book b;
    Tape t;

    cout << "Enter Book details:" << endl;
    b.get_data();

    cout << "\nEnter Tape details:" << endl;
    t.get_data();

    cout << "\nBook Details:" << endl;
    b.put_data();

    cout << "\nTape Details:" << endl;
    t.put_data();

    return 0;
}
