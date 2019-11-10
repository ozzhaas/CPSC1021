/**********************
  Kellen Haas
  CPSC1021
  Sec. 001-F19
  mkhaas@g.clemson.edu
  Damion
  11/05/19
 *********************/

#include <fstream>
#include <sstream>
#include "BookList.h"
#include "Book.h"

int howMany(ifstream& in);


int main (int argc, char* argv[]) {
    int size, id, yr = 0;
    string titl = "unknown";
    double r = 0.0;

    ifstream input;
    input.open(argv[1]);
    size = howMany(input);

    BookList book_list(size);
    input.clear();
    input.seekg(0, std::ios::beg);
    Book* Book1;


    while (!input.fail()) {
        input >> id >> yr >> r;
        getline(input, titl, '\n');
        Book1 = new Book(id, titl, yr, r);
        book_list.addBook(Book1);
    }
    book_list.print();
    cout << "Enter the book ID to update year and rating: " << endl;
    cin >> id;
    cout << "Enter the updated year and rating for the book with ID " << id << endl;
    cin >> yr >> r;
    book_list.updateBook(id, yr, r);
    book_list.calculateAverageRating();
}


int howMany(ifstream& input) {
    string line;
    int numBooks = 0;

    while (getline(input, line)) {
        numBooks++;
    }
    return numBooks;

}
