/**********************
  Kellen Haas
  CPSC1021
  Sec. 001-F19
  mkhaas@g.clemson.edu
  Damion
  10/27/19
 *********************/

#include "board.hpp"

Board::Board() {
    for (int i = 0; i < numTurns; i++) {
        pieces[i].push_back('x');
        pieces[i + 1].push_back('o');
    }
}

Board::~Board() {};


// This function will print the gameboard.
// I recommend using a string stream to do so.
string Board::print() {
    char ch = '1';
    stringstream temp;
    for (int i = 0; i < 3; i++) {
        temp << '|' << endl;
        for (int j = 0; j < 3; j++){
            temp << left << setw(2) << ch++ << setw(2) << '|' << endl;
        }
    }
    return temp.str();
}
// This function will take in the position the game piece will be placed in and the gamepiece.
//void insert_piece(int pos, string p);
// This will return the piece you need for insert_piece. You must get this value
// From the Vector above.
//string::Board get_piece(int pos) {
//    return pos;
//}
// pass a gamepiece token into this function to check if it won.
// Think of the ways you can win in TicTacToe
//bool won(string p);
// This function will check if there is a tie.. How can it check this?
//bool is_a_tie();
