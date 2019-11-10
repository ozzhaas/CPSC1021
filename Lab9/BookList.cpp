/**********************
  Kellen Haas
  CPSC1021
  Sec. 001-F19
  mkhaas@g.clemson.edu
  Damion
  11/05/19
 *********************/

#include "BookList.h"


BookList::BookList(int size){
    books.reserve(size);
};


bool BookList::addBook(Book* b){
    if (search(b->getID()) == NULL) {
        books.push_back(b);
        return true;
    }
    else {
        return false;
    }
    return false;
}


Book* BookList::search(int bookID) {

    auto result = find_if(books.begin(), books.end(), [bookID](const Book* bk)
        {if (bk == nullptr)
            {return false; }
        else
            {return bk->getID() == bookID; }});

    return *result;
}


bool BookList::updateBook(int ID, int year, double rating) {





}
//
//
// double BookList::calculateAverageRating() {
//
//
//
//
// }
//
//
// void BookList::removeBook(int bookID) {
//
//
//
//
// }
//
//
void BookList::print() {
    Book* tempbook;
    cout << endl;
    cout << "Number of books inserted: " << books.size() << endl;
    cout << "Information of books sorted by their ID" << endl << endl;
    for (int i = 0; i < static_cast<int> (books.size()); i++) {
        sort(books.begin(), books.end(), ComparatorByID());
            tempbook = books[i];
            cout << tempbook->print();
    }
}


BookList::~BookList() {
    books.clear();
}
