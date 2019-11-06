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
};





// bool BookList::addBook(Book* b){
//     for (int i = 0; i < static_cast<int> (books.size()); i++) {
//
//
//         }
//     }
//
// }


Book* BookList::search(int bookID) {
    Book* ptr = NULL;

    for (int i = 0; i < static_cast<int> (books.size()); i++){
        if (bookID == books[i].getID()) {
            return books[i];
        }
        else {
            return ptr;
        }
    }
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
        cout << books[i] << endl;
    }

}


BookList::~BookList() {};
