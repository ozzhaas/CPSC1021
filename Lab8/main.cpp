/**********************
Kellen Haas
CPSC1021
Sec. 001-F19
mkhaas@g.clemson.edu
Damion
10/27/19
*********************/
#include "board.hpp"


int main() {
    int position = 0;
    bool win = false;
    Board mainBoard;

    string player = mainBoard.get_piece(position);
    cout << mainBoard.print();
    for (int i = 0; i < 9; i++) {
        player = mainBoard.get_piece(position);
        cout << "Player " << player << ": Which position would you like to play?" << endl;
        cin >> position;
        mainBoard.insert_piece(position, player);

        while (cin.fail() || position < 1 || position > 9){
            cout << "Error: input position is not an option on the game board. Try again!" << endl;
            cin >> position;
            mainBoard.insert_piece(position, player);
            if (!cin.fail() && position >= 1 && position <= 9) {
                break;
            }
            else {
                cin.clear();
                cin.ignore();
                cin >> position;
                mainBoard.insert_piece(position, player);
            }
        }
        win = mainBoard.won(player);
        if (win == true) {
            cout << mainBoard.print();
            cout << "Congrats player " << player << " you won!" << endl;
            break;
        }

    cout << mainBoard.print();
    }
    mainBoard.is_a_tie(player);


}
