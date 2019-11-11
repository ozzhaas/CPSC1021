/**********************
  Kellen Haas
  CPSC1021
  Sec. 001-F19
  mkhaas@g.clemson.edu
  Damion
  11/05/19
 *********************/

#include "BookList.h"

/***************************************
Constructs a BookList of the size found
in main for the number of books to add
and creates a vector of that size.
***************************************/
BookList::BookList(int size){
    books.reserve(size);
};

/***************************************
 Function will add the books to the
 vector if they were not found in the
 vector already.
 Parameters: an object pointer of Book
 Return: true if the book was not found
    and false if it was found.
***************************************/
bool BookList::addBook(Book* b){
    if (search(b->getID()) == nullptr) {
        books.push_back(b);
        return true;
    }
    else {
        return false;
    }
    return false;
}

/***************************************
 Function will search through the vector
 of books and see if the book with the
 ID passed in already exists.
 Parameter: int bookID to be checked
 Return: instance of Book as object
    pointer if it is found or nullptr
    if it is not found.
***************************************/
Book* BookList::search(int bookID) {
    for(auto& b : books) {
        if (b->getID() == bookID) {
            return b;
    }
}
return nullptr;

}

/***************************************
 Function will update the book year and
 rating based on the users input for
 which book they want to update and
 the new year and rating they want
 to add.
 Parameters: ID they want to update,
    year they want to change it to and
    rating they want to change it to.
 Return: True if the book was found and
 then updated or false if the book is
 not in the vector.
***************************************/
bool BookList::updateBook(int ID, int year, double rating) {
    string title = "nothing";

    if (search(ID) == nullptr) {
        return false;
    }
    else {
        Book* booktoUpdate = search(ID);
        booktoUpdate->updateBook(year, rating);
        return true;
    }
}

/***************************************
 Function will calculate the average
 of all the books ratings.
 Parameter: none
 Return: a double value of average
***************************************/
double BookList::calculateAverageRating() {
    double sum, average = 0.0;
    for (unsigned int i = 0; i < books.size(); i++) {
        print();
        sum += books[i]->getRating();
    }
    average = sum/(static_cast<double> (books.size()));
    cout << "Average rating for books is ";
    cout << fixed << setprecision(2) << average << endl;
return average;
}

/***************************************
 Function will remove a book from the
 vector based on the ID that the user
 says they want to remove.
 Parameters: bookID to remove
 Return: void
***************************************/
void BookList::removeBook(int bookID) {
    if (BookList::search(bookID) != nullptr) {
        for (auto it = books.begin(); it < books.end(); ) {
            if (*it == search(bookID)) {
                it = books.erase(it);
            }
            it++;
        }
    }
}

/***************************************
 Function will take the Book::print()
 function and use it to print out all
 instances of the book in the vector.
 Parameters: none
 Return: void
***************************************/
void BookList::print() {
    Book* tempbook;
    cout << "Information of books sorted by their ID" << endl << endl;
    for (unsigned int i = 0; i < books.size(); i++) {
        sort(books.begin(), books.end(), ComparatorByID());
            tempbook = books[i];
            cout << tempbook->print();
    }
}

/***************************************
Destructor for the BookList
Clears the vector too
***************************************/
BookList::~BookList() {
    books.clear();
}
