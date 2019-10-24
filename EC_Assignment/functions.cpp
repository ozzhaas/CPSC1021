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


int wordCompare(word* a, word* b){
    if (a->Count < b->Count) {
        return -1;
    }
    else if (a->Count > b->Count) {
        return 0;
    }
}


int mostUsedWord(ifstream& input, int numofWords){
    wordStruct wordArray;
    string temp_word;
    int max = 1;

    for (int i = 0; i < numofWords; i++){
        input >> temp_word;
        temp_word[i] = tolower(temp_word[i]);
        if (checkWord(temp_word[i]) == -1){
            wordArray.word[i].erase();
        }
        else {
            if (temp_word == wordArray.word[i]) {
                //word is already in the array
                //increment the count of the word
                wordArray.Count++;
            }
            else {
                wordArray.word[i] = word;
                wordArray.word[i]->Count = 1;
            }
        }
    }
    for (int j = 0; j < numofWords; j++){
        if ((wordCompare(wordArray.word[j], wordArray.word[j + 1])) == -1) {
            wordArray.maxWord = wordArray.word[j + 1];
        }
        else if ((wordCompare(wordArray.word[j], wordArray.word[j + 1])) == 0) {
            wordArray.maxWord = wordArray.word[j];
        }
    }
    cout << "Max used word is: " << wordArray.maxWord << endl;
return 0;
}
