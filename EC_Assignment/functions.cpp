//Kellen Haas
//CPSC1020
//Extra credit
//mkhaas@g.clemson.edu
//10/21/19

#include "functions.h"


int checkWord(char checker){
    if ((checker >= 'a') && (checker <= 'z')) {
        return -1;
    }
    else {
        return 0;
    }
}


int wordCompare(char* a, char* b){
    if (a->Count < b->Count) {
        return -1;
    }
    else if (a->Count > b->Count) {
        return 0;
    }
}


int mostUsedWord(ifstream& input, int numofWords){
    struct wordStruct wordArray;
    char temp_word[20];
    int max = 1;

    for (int i = 0; i < numofWords; i++){
        input >> temp_word;
        temp_word[i] = tolower(temp_word[i]);
        if (checkWord(temp_word[i]) == -1){
            wordArray.words[i].erase();
        }
        else {
            if (temp_word == wordArray.words[i]) {
                //word is already in the array
                //increment the count of the word
                wordArray.words[i]->Count++;
            }
            else {
                wordArray.words[i] = word;
                wordArray.words[i]->Count = 1;
            }
        }
    }
    for (int j = 0; j < numofWords; j++){
        if ((wordCompare(wordArray.words[j], wordArray.words[j + 1])) == -1) {
            wordArray.maxWord = wordArray.words[j + 1];
        }
        else if ((wordCompare(wordArray.words[j], wordArray.words[j + 1])) == 0) {
            wordArray.maxWord = wordArray.words[j];
        }
    }
    cout << "Max used word is: " << wordArray.maxWord << endl;
return 0;
}
