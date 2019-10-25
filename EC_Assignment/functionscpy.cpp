//Kellen Haas
//CPSC1020
//Extra credit
//mkhaas@g.clemson.edu
//10/21/19

#include "functions.h"


int checkWord(string checker){
    int len = checker.size();
    for (int i = 0; i < len; i++){
        if ((checker[i] >= 'a') && (checker[i] <= 'z')) {
            return -1;
        }
        else {
            return 0;
        }
    }
    return 0;
}



//void mostUsedWord(string temp_word_arr[], int numofWords){

//}
