# Library-management-system.


1. Project Overview

BLUF (Bottom Line Up Front):

The Library Management System is a simple C++ console-based application designed to manage library book records efficiently. It allows users to add, display, search, and delete books through a menu-driven interface.

2. Features

- Add Book: Add a new book with its ID, name, and author.
- Display Books: View all available books.
- Search Book: Find a book using its unique ID.
- Delete Book: Remove a book from the library records.
- Menu-Driven Interface: Select operations through a simple menu.

3. Technologies Used

- Programming Language: C++
- Concepts: Classes, Objects, Arrays, Functions, Loops, Constructors, and Conditional Statements.
- Compiler: GCC / MinGW / Visual Studio C++.

4. System and Language Dependencies

Operating System:

- Windows 10 or later
- Linux
- macOS

Language Dependencies:

- C++ compiler supporting C++11 or later.
- Standard C++ libraries:
  - "iostream"
  - "string"

No external libraries are required.

5. Installation and Execution

Follow these three steps to run the project:

Step 1: Clone the Repository

git clone YOUR_REPOSITORY_LINK

Step 2: Open the Project Directory

cd Library-Management-System

Step 3: Compile and Run the Program

Using GCC:

g++ main.cpp -o library

Run on Windows:

library.exe

Run on Linux/macOS:

./library

6. Minimal Working Example (MWE)

The following isolated example demonstrates how to create a library object and add a book.

#include <iostream>
using namespace std;

int main() {
    int bookID = 101;

    cout << "Library Management System";
    cout << "\nBook ID: " << bookID;

    return 0;
}

Expected Output:

Library Management System
Book ID: 101

7. Project Structure

Library-Management-System/
│
├── main.cpp
└── README.md

8. Limitations

- Book records are stored in arrays.
- Data is not permanently saved after closing the program.
- Maximum storage capacity is 100 books.

9. Future Improvements

- Add book issue and return functionality.
- Store records permanently using file handling.
- Add student information management.
- Improve the user interface.

10. Author

Project Name: Library Management System
Language: C++
Project Type: University Programming Project