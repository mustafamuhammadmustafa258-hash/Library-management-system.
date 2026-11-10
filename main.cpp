
#include <iostream>
#include <string>
using namespace std;

class Library {
private:
    int bookID[100];
    string bookName[100];
    string author[100];
    int totalBooks;

public:
    Library() {
        totalBooks = 0;
    }

    // Add a new book
    void addBook() {
        cout << "\nEnter Book ID: ";
        cin >> bookID[totalBooks];

        cin.ignore();

        cout << "Enter Book Name: ";
        getline(cin, bookName[totalBooks]);

        cout << "Enter Author Name: ";
        getline(cin, author[totalBooks]);

        totalBooks++;

        cout << "\nBook Added Successfully!\n";
    }

    // Display all books
    void displayBooks() {
        if (totalBooks == 0) {
            cout << "\nNo Books Available!\n";
            return;
        }

        cout << "\n----- Library Books -----\n";

        for (int i = 0; i < totalBooks; i++) {
            cout << "\nBook ID: " << bookID[i];
            cout << "\nBook Name: " << bookName[i];
            cout << "\nAuthor: " << author[i] << endl;
        }
    }

    // Search a book
    void searchBook() {
        int id;
        bool found = false;

        cout << "\nEnter Book ID to Search: ";
        cin >> id;

        for (int i = 0; i < totalBooks; i++) {
            if (bookID[i] == id) {
                cout << "\nBook Found!";
                cout << "\nBook Name: " << bookName[i];
                cout << "\nAuthor: " << author[i] << endl;
                found = true;
                break;
            }
        }

        if (!found) {
            cout << "\nBook Not Found!\n";
        }
    }

    // Delete a book
    void deleteBook() {
        int id;
        cout << "\nEnter Book ID to Delete: ";
        cin >> id;

        for (int i = 0; i < totalBooks; i++) {
            if (bookID[i] == id) {

                for (int j = i; j < totalBooks - 1; j++) {
                    bookID[j] = bookID[j + 1];
                    bookName[j] = bookName[j + 1];
                    author[j] = author[j + 1];
                }

                totalBooks--;

                cout << "\nBook Deleted Successfully!\n";
                return;
            }
        }

        cout << "\nBook Not Found!\n";
    }
};

int main() {
    Library lib;
    int choice;

    do {
        cout << "\n===== LIBRARY MANAGEMENT SYSTEM =====";
        cout << "\n1. Add Book";
        cout << "\n2. Display Books";
        cout << "\n3. Search Book";
        cout << "\n4. Delete Book";
        cout << "\n5. Exit";

        cout << "\n\nEnter Your Choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                lib.addBook();
                break;

            case 2:
                lib.displayBooks();
                break;

            case 3:
                lib.searchBook();
                break;

            case 4:
                lib.deleteBook();
                break;

            case 5:
                cout << "\nThank You for Using Library System!";
                break;

            default:
                cout << "\nInvalid Choice! Try Again.\n";
        }

    } while (choice != 5);

    return 0;
}
