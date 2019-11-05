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

    ifstream input;
    input.open(argv[1]);
    howMany(input);
}


int howMany(ifstream& input) {
    string line;
    int numBooks = 0;

    while (getline(input, line)) {
        numBooks++;
    }
    return numBooks;

}
