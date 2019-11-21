#include "Book.h"


Book::Book()
{

	  /*Use setter from the person class to set the name*/

}


string Book::getTitle() const
{
	return title;
}
int Book::getYear() const
{
	return year;
}
double Book::getRating() const
{
	return rating;
}

string Book::getISBN() const
{
	return isbn;
}

void Book::printBook(fstream& out) const
{




 out << endl << "Book Title" << endl << title << endl;


   out << "Year: " << endl << year << endl;
   out << "Rating:" << endl << fixed  << showpoint <<  setprecision(2) << rating << endl;
   out<< "Books ISBN: " << endl << isbn << endl;

}
Book::~Book()
{
}
