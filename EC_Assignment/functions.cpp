//Kellen Haas
//CPSC1020
//Extra credit
//mkhaas@g.clemson.edu
//10/21/19

#include "functions.h"



string Lower(string lowercase) {
    int length = lowercase.size();
    for (int i = 0; i < length; i++) {
        if ((lowercase[i] == '.') || (lowercase[i] == ',') ||
        (lowercase[i] == '!') || (lowercase[i] == '?') ||
        (lowercase[i] == '-') || (lowercase[i] == '\0')) {
            lowercase.erase (std::remove_if(lowercase.begin(), lowercase.end(), ::ispunct), lowercase.end());
        }
        lowercase[i] = tolower(lowercase[i]);
        //cout << "To lower test" << endl;
        //cout << lowercase[i] << endl;
    }
    return lowercase;
}


string mostUsedWord(vector<string>&wordArray, int numofWords){
    //struct wordStruct wordArray;
    string maxWord = {"Kellen"};
    vector<string> new_arr;
    vector<int> Count;
    string temp;

    Count.push_back(1);


    for (int i = 0; i < numofWords; i++){
        wordArray[i] = Lower(wordArray[i]);
        temp = wordArray[i];
        cout << wordArray[i] << endl;
        if (temp == wordArray[i]) {
            //word is already in the array
            //increment the count of the word
            Count[i]++;
            //cout << wordArray.Count[i] << endl;
        }
        else {
            Count[i] = 1;
            wordArray[i] = temp;
            //if (Count[i] > 3){
            //    cout << wordArray[i] << endl;
            //}
        }
    }

    for (int j = 0; j < numofWords; j++){
        //cout << wordArray.Count[j] << endl;
        if (Count[j] < Count[j + 1]) {
            maxWord = wordArray[j + 1];
        }
        else if (Count[j] > Count[j + 1]) {
            maxWord = wordArray[j];
        }
    }
    return maxWord;
}
