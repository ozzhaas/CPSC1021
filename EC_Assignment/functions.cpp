//Kellen Haas
//CPSC1020
//Extra credit
//mkhaas@g.clemson.edu
//10/21/19

#include "functions.h"



int mostUsedWord(ifstream& input, int numofWords){
    int i = 0;
    string arrayofwords[10000000];
    string word;
    int max = 1;
    int word_count = 0;
    string begin;

    while (i < numofWords){
        input >> word;
        begin = arrayofwords[0];
        word_count = 1;
        if (word == arrayofwords[i]) {
            //word is already in the array
            //increment the count of the word
            word_count++;
        }
        else {
            if (word_count > max) {
                max = temp;
                begin = arrayofwords[i - 1];
            }
            temp = 1;
        }
        i++;
    }
}
