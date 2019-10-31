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
    pieces.push_back("x");
    pieces.push_back("o");
    gameboard[0][0] = "1";
    gameboard[0][1] = "2";
    gameboard[0][2] = "3";
    gameboard[1][0] = "4";
    gameboard[1][1] = "5";
    gameboard[1][2] = "6";
    gameboard[2][0] = "7";
    gameboard[2][1] = "8";
    gameboard[2][2] = "9";
    numTurns = 0;
}

Board::~Board() {};

// This function will print the gameboard.
// I recommend using a string stream to do so.
string Board::print() {
    stringstream temp;
    temp << endl;
    temp << endl;
    for (int i = 0; i < 3; i++) {
        temp << "\t| ";
        for (int j = 0; j < 3; j++){
            temp << left << setw(2) << gameboard[i][j] << setw(2) << "|";
            if (j == 2) {
                temp << endl;
            }
        }
    }
    temp << endl;
    temp << endl;
    return temp.str();
}
// This function will take in the position the game piece will be placed in and the gamepiece.
void Board::insert_piece(int pos, string p) {
    string temp = "temp";
    temp = to_string(pos);
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (gameboard[i][j] == temp) {
                gameboard[i][j] = p;
            }
        }
    }


    numTurns++;
}
// This will return the piece you need for insert_piece. You must get this value
// From the Vector above.
string Board::get_piece(int pos){
        return (pieces[numTurns % 2]);
}
// pass a gamepiece token into this function to check if it won.
// Think of the ways you can win in TicTacToe
bool won(string p);
// This function will check if there is a tie.. How can it check this?
bool is_a_tie();
