// Library System

//#include <iostream>
//#include <string>
//#include <vector>
//using namespace std;
//
//// Add book Function
//vector<string> gen_book(string id, string title, string author) {
//    vector<string> book;
//
//    cout << "Enter the id of the book: " << endl;
//    cin >> id;
//    book.push_back(id);
//
//    cout << "Enter the title of the book: " << endl;
//    cin >> title;
//    book.push_back(title);
//
//    cout << "Enter the author of the book: " << endl;
//    cin >> author;
//    book.push_back(author);
//
//    return book;
//}
//
//vector<string> add_book(vector<string>& book, vector<string>& database) {
//    // Populate the database
//    for (int i = 0; i < 3; i++) {
//        database.push_back(book[i]);
//    }
//
//    // Availability
//    string available = "Yes";
//    database.push_back(available);
//    return database;
//}
//
//// displayInfo
//void displayInfo(const vector<string>& database) {
//    cout << "The Books in Database" << endl;
//    string names[3] = {"Index", "Title", "Author"};
//
//    for (int i = 0; i < database.size(); i += 4) { // We iterate with each id at +4
//        for (int j = 0; j < 3; j++) {
//            if (i + j < database.size()) {
//                cout << names[j] << ": " << database[i + j] << endl;
//            }
//        }
//        cout << endl;
//    }
//}
//
//// search_book
//void search_book(string id, vector<string>& database) {
//    for (int i = 0; i < database.size(); i += 4) { // Iterate in index only
//        // Check in Database
//        if (database[i] == id) {
//            string names[3] = {"Index", "Title", "Author"};
//            cout << "The Requested Book Data " << endl;
//
//            for (int j = 0; j < 3; j++) {
//                cout << "The " << names[j] << " is: " << database[i + j] << endl;
//            }
//            return; // Exit after finding the book
//        }
//    }
//    cout << "Book not found." << endl; // If book is not found
//}
//
//// remove_book
//void remove_book(string id, vector<string>& database) {
//    for (int i = 0; i < database.size(); i += 4) { // Iterate in index only
//        // Check in Database
//        if (database[i] == id) {
//            database.erase(database.begin() + i, database.begin() + i + 4);
//            cout << "Book removed successfully." << endl;
//            return; // Exit after removing the book
//        }
//    }
//    cout << "Book not found." << endl; // If book is not found
//}
//
//// borrow_book
//void borrow_book(string id, vector<string>& database) {
//    for (int i = 0; i < database.size(); i += 4) { // Iterate in index only
//        // Check in Database
//        if (database[i] == id) {
//            if (database[i + 3] == "Yes") {
//                cout << "The book is available." << endl;
//                database[i + 3] = "No"; // Mark as borrowed
//            } else {
//                cout << "The book is not available." << endl;
//            }
//            return; // Exit after borrowing
//        }
//    }
//    cout << "Book not found." << endl; // If book is not found
//}
//
//// return_book
//void return_book(string id, vector<string>& database) {
//    for (int i = 0; i < database.size(); i += 4) { // Iterate in index only
//        // Check in Database
//        if (database[i] == id) {
//            if (database[i + 3] == "No") {
//                cout << "The book is now returned." << endl;
//                database[i + 3] = "Yes"; // Mark as available
//            } else {
//                cout << "The book was not borrowed." << endl;
//            }
//            return; // Exit after returning
//        }
//    }
//    cout << "Book not found." << endl; // If book is not found
//}
//
//// update_book
//void update_book(string id, vector<string>& database) {
//    for (int i = 0; i < database.size(); i += 4) { // Iterate in index only
//
//        // Check in Database
//        if (database[i] == id) {
//            string new_id, new_title, new_author;
//            vector<string> book = gen_book(new_id, new_title, new_author);
//
//            // Update the database
//            database[i] = book[0];
//            database[i + 1] = book[1];
//            database[i + 2] = book[2];
//
//
//            cout << "Book updated successfully." << endl;
//            return;
//        }
//    }
//    cout << "Book not found." << endl; // If book is not found
//}
//
//int main() {
//    // Take user input
//    vector<string> database;
//    vector<string> book;
//    string id, title, author;
//
//    bool flag = true;
//    char check;
//
//    do {
//        // Add book
//        book = gen_book(id, title, author);
//        database = add_book(book, database); // Update the database reference
//
//        // Any more?
//        cout << "Do you want to add another book? (y/n): " << endl;
//        cin >> check;
//
//        // Set flag
//        flag = (check == 'y');
//
//    } while (flag);
//
//    // Search for a book
//    search_book("p11", database);
//
//    // Borrow a book
//    borrow_book("p11", database);
//
//    // Return a book
//    return_book("p11", database);
//
//    // Update a book
//    update_book("p11", database);
//
//    // Remove a book
//    remove_book("p11", database);
//
//    // Display the database
//    displayInfo(database);
//
//    return 0;
//}
