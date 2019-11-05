/**********************
  Kellen Haas
  CPSC1021
  Sec. 001-F19
  mkhaas@g.clemson.edu
  Damion
  11/05/19
 *********************/

#include "BookList.h"


BookList::BookList(int size){};



//
//
// bool BookList::addBook(Book* b){
//
//
// }
//
//
// Book* BookList::search(int bookID) {
//
//
//
//
// }
//
//
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
    stringstream string;
    for (int i = 0; i < books.size; i++) {
        string << books[i];

    }


}


BookList::~BookList() {};
