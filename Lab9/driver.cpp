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
    int size = 0;
    // int id = 0;
    // int yr = 0;
    // double r = 0.0;
    // string titl;



    ifstream input;
    input.open(argv[1]);
    size = howMany(input);

    BookList book_list(size);
    input.clear();
    input.seekg(0, std::ios::beg);
    Book* Book1;
    string id;
    string yr;
    string r;
    string titl;

    while (!input.fail()) {
        getline(input, id, ' ');
        getline(input, yr, ' ');
        getline(input, r, ' ');
        getline(input, titl, '\n');

        Book1 = new Book(id, titl, yr, r);

        //cout << temp2 << " " << temp3 << " " << temp4 << endl;
        //cout << fixed << setw(2) << setfill('0') << id << " " << yr << " " << fixed << setprecision(2) <<  r << " " << titl << endl;
        book_list.addBook(Book1);

        // if (book_list.search(id) == NULL){
        //     //do nothing
        // }
        // else {
        //     cout << "TEST" << endl;
        //     book_list.addBook(Book1);
        // }
    }
    book_list.print();


}


int howMany(ifstream& input) {
    string line;
    int numBooks = 0;

    while (getline(input, line)) {
        numBooks++;
    }
    return numBooks;

}
