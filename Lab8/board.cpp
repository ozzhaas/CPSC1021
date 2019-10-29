/**********************
  Kellen Haas
  CPSC1021
  Sec. 001-F19
  mkhaas@g.clemson.edu
  Damion
  10/27/19
 *********************/
using namespace std;
#include "board.hpp"

Board::Board() {
    for (int i = 0; i < numTurns; i++) {
        pieces.push_back(mv1);
        pieces.push_back(mv2);
    }#include "board.hpp"
}

~Board();


// This function will print the gameboard.
// I recommend using a string stream to do so.
Board::print() {
    stringstream printBoard;
    for (int i = 0; i < 3; i++) {
        printBoard << '|';
        for (int j = 0; j < 3; j++){
            printBoard << " " << gameboard[i][j] << " " << '|' << endl;
        }
    }


    printBoard << left << setw(15) <<


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
