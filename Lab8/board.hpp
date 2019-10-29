#include <vector>
#include <string>
using namespace std;

class Board
{
    private:
        // This needs to hold a "x" and a "o"
        vector<string> pieces;
        // This will be our gameboard
        string gameboard[3][3];
        int numTurns;
    public:
        //This needs to initialize the board, just as shown in the lab writeup
        // and give the vector an x and o.
        Board();
        // Clear the vector here.
        ~Board();
        // This function will print the gameboard.
        // I recommend using a string stream to do so.
        string print();
        // This function will take in the position the game piece will be placed in and the gamepiece.
        void insert_piece(int pos, string p);
        // This will return the piece you need for insert_piece. You must get this value
        // From the Vector above.
        string get_piece(int pos);
        // pass a gamepiece token into this function to check if it won.
        // Think of the ways you can win in TicTacToe
        bool won(string p);
        // This function will check if there is a tie.. How can it check this?
        bool is_a_tie();
};
