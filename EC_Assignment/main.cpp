//Kellen Haas
//CPSC1020
//Extra credit
//mkhaas@g.clemson.edu
//10/21/19

#include "functions.h"
vector<string> vec_words;

int main (int argc, char* argv[]) {
    int numWords = 0;
    string word;
    string theWord;



    if (argc == 2) {
        ifstream inputScriptFile;
        inputScriptFile.open(argv[1]);
        while (inputScriptFile >> word) {
            numWords++;
        }
        inputScriptFile.close();
        inputScriptFile.clear();
        inputScriptFile.open(argv[1]);
        string main_arr[numWords];
        for (int i = 0; i < numWords; i++){
            inputScriptFile >> main_arr[i];
            vec_words.push_back(main_arr[i]);
        }

        theWord = mostUsedWord(vec_words, numWords);
        cout << "The most used word in the script is: " << theWord << endl;
        inputScriptFile.close();
    }
    else if (argc == 1){
        cout << "Missing the script file." << endl;

    }
    else {
        cout << "Error too many command line arguments." << endl;
    }


return 0;
}
