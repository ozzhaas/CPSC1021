//Kellen Haas
//CPSC1020
//Extra credit
//mkhaas@g.clemson.edu
//10/21/19

#include "functions.h"

int main (int argc, char* argv[]) {
    int numWords = 0;
    string word;

    cout << argv[1] << endl;
    //if (argc == 2) {
        ifstream inputScriptFile;
        inputScriptFile.open(argv[1]);
        while (inputScriptFile >> word) {
            numWords++;
        }
        inputScriptFile.close();
        inputScriptFile.clear();
        //inputScriptFile.seekg(0, ios::beg);
        inputScriptFile.open(argv[1]);
        string main_arr[numWords];
        for (int i = 0; i < numWords; i++){
            inputScriptFile >> main_arr[i];
        }

    //functions.cpp stuff
    struct wordStruct wordArray;
    wordArray.Count[numWords] = {0};

    for (int i = 0; i < numWords; i++){
        transform(main_arr->begin(), main_arr->end(), main_arr->begin(), ::tolower);///Look up transform in C++
        if ((checkWord(wordArray.words[i])) == -1){
            //Not a word
        }
        else {
            if (main_arr[i] == wordArray.words[i]) {
                //word is already in the array
                //increment the count of the word
                wordArray.Count[i]++;
            }
            else {
                wordArray.words[i] = main_arr[i];
                wordArray.Count[i]++;
            }
        }
    }
    for (int j = 0; j < numWords; j++){
        if (wordArray.Count[j] < wordArray.Count[j + 1]) {
            wordArray.maxWord = wordArray.words[j + 1];
        }
        else if (wordArray.Count[j] > wordArray.Count[j + 1]) {
            wordArray.maxWord = wordArray.words[j];
        }
    }
    cout << "Max used word is: " << wordArray.maxWord << endl;
    inputScriptFile.close();
    //}
    //else if (argc == 1){
//        cout << "Missing the script file." << endl;

    //}
    //else {
    //    cout << "Error too many command line arguments." << endl;
    //}


return 0;
}
