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



int mostUsedWord(string temp_word_arr[], int numofWords){
    struct wordStruct wordArray;
    wordArray.Count[numofWords] = {0};

    for (int i = 0; i < numofWords; i++){
        temp_word_arr[i] = tolower(temp_word_arr[i]);///Look up transform in C++
        if (checkWord(temp_word_arr[i]) == -1)){
            //Not a word
        }
        else {
            if (temp_word_arr[i] == wordArray.words[i]) {
                //word is already in the array
                //increment the count of the word
                wordArray.Count[i]++;
            }
            else {
                wordArray.words[i] = temp_word_arr[i];
                wordArray.Count[i]++;
            }
        }
    }
    for (int j = 0; j < numofWords; j++){
        if (wordArray.Count[j] < wordArray.Count[j + 1]) {
            wordArray.maxWord = wordArray.words[j + 1];
        }
        else if (wordArray.Count[j] > wordArray.Count[j]) {
            wordArray.maxWord = wordArray.words[j];
        }
    }
    cout << "Max used word is: " << wordArray.maxWord << endl;
return 0;
}
