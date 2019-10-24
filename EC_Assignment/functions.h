    #ifndef FUNCTIONS_H
#define FUNCTIONS_H

#include <string>
#include <iostream>
#include <algorithm>
#include <fstream>
#include <cstring>
using namespace std;

//struct Counter{
//    int word_count = 0;
//};


struct wordStruct{
    string words[10000000];
    string maxWord;
    int Count[10000000];

};




int checkWord(char);


int mostUsedWord(string, int);


#endif
