#include <iostream>
#include <string>
using namespace std;

class Reader {
protected:
    string favorite_book;
public:
    void get_reader_info() {
        cout << "Enter favorite book: ";
        cin.ignore();
        getline(cin, favorite_book);
    }
    
    void show_reader_info() const {
        cout << "Favorite Book: " << favorite_book << endl;
    }
};

class Writer {
protected:
    string latest_book;
public:
    void get_writer_info() {
        cout << "Enter latest book written: ";
        cin.ignore();
        getline(cin, latest_book);
    }
    
    void show_writer_info() const {
        cout << "Latest Book Written: " << latest_book << endl;
    }
};

class Scholar : public Reader, public Writer {
public:
    void get_scholar_info() {
        get_reader_info();
        get_writer_info();
    }
    
    void show_scholar_info() const {
        show_reader_info();
        show_writer_info();
    }
};

int main() {
    Scholar scholar;
    scholar.get_scholar_info();
    cout << "\nScholar Information:\n";
    scholar.show_scholar_info();
    return 0;
}
