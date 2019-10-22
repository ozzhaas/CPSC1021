//Kellen Haas
//CPSC1020
//Extra credit
//mkhaas@g.clemson.edu
//10/21/19

#include "functions.h"

int main (int argc, char* argv[]) {
    int numWords = 0;
    string word;

    if (argc == 2) {
        ifstream inputScriptFile;
        inputScriptFile.open(argv[1]);
        while (inputScriptFile >> word) {
            numWords++;
        }
        mostUsedWord(inputScriptFile, numWords);
    }
    else if (argc == 1){
        cout << "Missing the script file." << endl;

    }
    else {
        cout << "Error too many command line arguments." << endl;
    }



}
