/**********************
  Kellen Haas
  CPSC1021
  Sec. 001-F19
  mkhaas@g.clemson.edu
  Damion
  10/27/19
 *********************/

#include "board.hpp"


/*****************************************
  This is the implementation for the
  constructor of the Board class. It also
  initializes the gameboard slots to
  numbers 1 - 9 and the vector to a single
  x and a single o.

  Parameters:
  None

  Return Value: None
 ****************************************/
Board::Board() {

    //Places a single "x" and "o" into the vector to be the players//
    pieces.push_back("x");
    pieces.push_back("o");
    char ch = '1';

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            gameboard[i][j] = ch;
            ch++;
        }
    }
    numTurns = 0;
}

Board::~Board() {};




/*****************************************
  This function will print the gameboard
  using stringstream with numbers
  initially and then replaced by the
  letters x or o.

  Parameters:
  None

  Return Value: a string that is formatted and ready to print.
 ****************************************/
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


/*****************************************
  This function will insert the gamepiece
  aka the x or the o in the position
  specified by the users choice.

  Parameters:
  pos = position chosen by user
  p = a string that holds the player's value (x or o)

  Return Value: void
 ****************************************/
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


/*****************************************
  This function will get the piece that
  the player wants to insert into the
  chosen position.

  Parameters:
  pos = position chosen by user

  Return Value: a string either x or o
  from the vector depending on whether
  the number of turns is even or odd.
 ****************************************/
string Board::get_piece(int pos){
        return (pieces[numTurns % 2]);
}




/*****************************************
  This function will determine if the
  player that is passed in the
  parameter is a winner by scanning
  all of the rows and columns and the
  two diagonals for three of the same
  player either x or o.

  Parameters:
  string p = the player x or o

  Return Value: true if the player wins or
  false if the player loses
 ****************************************/
bool Board::won(string p) {
    int numMatches = 0;

    for (int i = 0; i < 3; i++) {
        if ((gameboard[i][0] == p) && (gameboard[i][1] == p)
           && (gameboard[i][2] == p)) {
            return true;
        }
    }
    for (int j = 0; j < 3; j++) {
        if ((gameboard[0][j] == p) && (gameboard[1][j] == p)
           && (gameboard[2][j] == p)) {
            return true;
        }
    }


    if ((gameboard[0][2] == p) && (gameboard[1][1] == p)
       && (gameboard[2][0] == p)) {
         return true;
    }

    if ((gameboard[0][0] == p) && (gameboard[1][1] == p)
       && (gameboard[2][2] == p)) {
        return true;
    }

return false;
}




/*****************************************
  This function will determine if the
  game is a tie by using the win function.
  If the win function is true then there
  is no tie, but if it is false then tie
  is true.

  Parameters:
  string p = the player x or o

  Return Value: true if the game is a tie
  or false if it is not.
 ****************************************/
bool Board::is_a_tie(string p) {
    if (Board::won(p) == false){
        cout << "You tied!" << endl;
        return true;
    }


}
