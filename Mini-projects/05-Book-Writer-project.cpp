/*
 Write a class name Book that contains book_name, book_id, book_price.
 Two method one is get input and other one is to show the book details.

 Write another class name Writer contains attributes writer_name, writer_address, 
 writer_books written by him and it contains member of book having length 5
 to store the data 5 of books. It has member function to get input and display output. 
*/

#include <iostream>
using namespace std;
class Book{
    private:
        string book_name;
        int book_id;
        float book_price;
    public:
        void get_input(){
            cout << "Enter book name: ";
            cin >> book_name;
            cout << "Enter book id: ";
            cin >> book_id;
            cout << "Enter book price: ";
            cin >> book_price;
        }
        void show_book_details(){
            cout << "Book name: " << book_name << endl;
            cout << "Book id: " << book_id << endl;
            cout << "Book price: " << book_price << endl;
        }
}; 
class Writer {
    private:
        string writer_name;
        string writer_address;
        Book books[5]; // Array of 5 books
    public:
        void get_input(){
            cout << "Enter writer name: ";
            cin >> writer_name;
            cout << "Enter writer address: ";
            cin >> writer_address;
            for(int i=0; i<5; i++){
                cout << "Enter details for book " << i+1 << ":" << endl;
                books[i].get_input();
            } 
        }

        void show_writer_details(){
            cout << "Writer name: " << writer_name << endl;
            cout << "Writer address: " << writer_address << endl;
            cout << "Books written by writer: " << endl;
            for(int i=0; i<5; i++){
                cout << "Book " << i+1 << ":" << endl;
                books[i].show_book_details();
            }
        }

};
int main() {
     Book book1;
     Writer writer1;

    cout<<"|----Put Details for Books ----|"<<endl;
    book1.get_input();
    cout<<"|---Put Details for Writer ----|"<<endl;
    writer1.get_input();
      
      cout<<endl;
     
     cout<<"|---Details are here for Books ----|"<<endl;
     book1.show_book_details();
     cout<<"|---Details are here for Writer ----|"<<endl;
     writer1.show_writer_details();
    
    return 0;
}