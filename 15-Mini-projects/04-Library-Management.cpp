#include <iostream>
#include <vector>
using namespace std;

class Book {
private:
    string title;
    string author;
    string isbn;
    bool is_issued;

public:
    Book() : title(""), author(""), isbn(""), is_issued(false) {}

    Book(string t, string a, string i) : title(t), author(a), isbn(i), is_issued(false) {}

    void issue() {
        if (is_issued)
            cout << "Book already issued." << endl;
        else {
            is_issued = true;
            cout << "Book issued successfully." << endl;
        }
    }

    void return_book() {
        if (!is_issued)
            cout << "Book is not issued." << endl;
        else {
            is_issued = false;
            cout << "Book returned successfully." << endl;
        }
    }

    void show_details() const {
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "ISBN: " << isbn << endl;
        cout << "Issued: " << (is_issued ? "Yes" : "No") << endl;
    }
};

class Library {
private:
    vector<Book> books;

public:
    void add_book(const Book& book) {
        books.push_back(book);
        cout << "Book added successfully." << endl;
    }

    void issue_book(const string& isbn) {
        for (auto& book : books) {
            if (book.get_isbn() == isbn) {
                book.issue();
                return;
            }
        }
        cout << "Book not found." << endl;
    }

    void return_book(const string& isbn) {
        for (auto& book : books) {
            if (book.get_isbn() == isbn) {
                book.return_book();
                return;
            }
        }
        cout << "Book not found." << endl;
    }

    void show_books() const {
        for (const auto& book : books) {
            book.show_details();
        }
    }
};

int main() {
    Library library;
    int choice;

    do {
        cout << "1. Add book" << endl;
        cout << "2. Issue book" << endl;
        cout << "3. Return book" << endl;
        cout << "4. Show books" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            // Add book logic
            break;
        case 2:
            // Issue book logic
            break;
        case 3:
            // Return book logic
            break;
        case 4:
            // Show books logic
            break;
        case 5:
            return 0;
        default:
            cout << "Invalid choice." << endl;
        }
    } while (true);

    return 0;
}
