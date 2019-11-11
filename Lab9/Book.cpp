/**********************
  Kellen Haas
  CPSC1021
  Sec. 001-F19
  mkhaas@g.clemson.edu
  Damion
  11/05/19
 *********************/


#include "Book.h"


/***************************************
Constructs a Book object to read in
books from the input file.
***************************************/
Book::Book(int ID, string titl, int yr, double r) {
	bookID = ID;
	title = titl;
	year = yr;
	rating = r;
};


/***************************************
Function gets the book's ID
and then returns the ID.
***************************************/
int Book::getID() const {
	return bookID;
}

/***************************************
Function gets the book's Title
and then returns the Title.
***************************************/
string Book::getTitle() const {
	return title;
}

/***************************************
Function gets the book's year
and then returns the year.
***************************************/
int Book::getYear() const {
	return year;
}

/***************************************
Function gets the book's rating
and then returns the rating.
***************************************/
double Book::getRating() const {
	return rating;
}

/***************************************
Function is used to update an individual
instance of a Book object
***************************************/
void Book::updateBook(int yr, double r) {
	year = yr;
	rating = r;

}

/***************************************
Function orints out a single Book object
***************************************/
string Book::print() const {
	stringstream printStr;

	printStr << fixed << setw(4) << right << bookID << " " << right << setw(2) << year << " " << setprecision(2) << setw(2) << right << rating << " " << setw(25) << right << title << endl << endl;

	return printStr.str();
}

/***************************************
Destructor for the Book Object
***************************************/
Book::~Book() {};
