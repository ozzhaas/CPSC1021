/**********************
  Kellen Haas
  CPSC1021
  Sec. 001-F19
  mkhaas@g.clemson.edu
  Damion
  11/05/19
 *********************/


#include "Book.h"



Book::Book(int ID, string titl, int yr, double r) {
	bookID = ID;
	title = titl;
	year = yr;
	rating = r;
};



int Book::getID() const {
	return bookID;
}

string Book::getTitle() const {
	return title;
}

int Book::getYear() const {
	return year;
}

double Book::getRating() const {
	return rating;
}
//
// void Book::updateBook(int yr, double rating) {
//
//
// }


// string Book::print() const {
//
// }

Book::~Book() {};
