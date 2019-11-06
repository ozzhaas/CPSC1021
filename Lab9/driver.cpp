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
    int id = 0;
    int yr = 0;
    double r = 0.0;
    string titl;


    ifstream input;
    input.open(argv[1]);
    size = howMany(input);

    BookList book_list(size);
    book_list.print();

    input.clear();
    input.seekg(0, std::ios::beg);

    while (!input.fail()) {
        input >> id;
        input >> yr;
        input >> r;
        input >> titl;
        Book Book1;
    }


}


int howMany(ifstream& input) {
    string line;
    int numBooks = 0;

    while (getline(input, line)) {
        numBooks++;
    }
    return numBooks;

}
