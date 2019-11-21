#ifndef BOOK_H
#define BOOK_H

#include <string>
#include <sstream>
#include <iomanip>

using namespace std;

/*
 * Book class
 *
 * A Book object contains a book ID, publication year, and a rating.
 *
 */
class Book{

  public:


    Book() : title("unknown"), rating(0.0), year(1900), isbn("000000000") {}
    Book(string t, double r, int y, string i) : title(t), rating(r), year(y), isbn(i) {}
    // Constructs a book with the given title, rating, year and isbn.

    // Accessors

    string getTitle() const;    // returns the title
    int getYear() const;        // returns the publication year
    double getRating() const;   // returns the rating

    string getISBN() const; // returns isbn

    // Methods

    void printBook(fstream& out) const; // print out the book information
                        // as ID title year rating

   //destructor
    ~Book();

  private:
    string title;
    double rating;
    int year;
    string isbn;
};

#endif
