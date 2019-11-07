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
    // for (int i = 0; i < size; i++) {
    //     books.push_back(0);
    // }
};


bool BookList::addBook(Book* b){
    if (search(b->getID()) == NULL) {
        //do nothing
    }
    else {
        books.push_back(b);
        return true;
    }
    return false;
}


Book* BookList::search(int bookID) {
    Book* ptr = NULL;

    find_if(books.begin(), books.end(), [bookID](const Book* bk) {
        return bk;
    });
    return ptr;

}


// bool BookList::updateBook(int ID, int year, double rating) {
//
//
//
//
//
// }
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
    for (int i = 0; i < static_cast<int> (books.size()); i++) {
        ComparatorByID()(books[i], books[i+1]);
        cout << books[i] << endl;
    }

}


BookList::~BookList() {
    books.clear();
};
