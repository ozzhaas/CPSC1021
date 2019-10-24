    #ifndef FUNCTIONS_H
#define FUNCTIONS_H

#include <string>
#include <iostream>
#include <algorithm>
#include <fstream>
#include <cstring>
using namespace std;

struct wordStruct{
    string words[10000000];
    string maxWord;
    struct Counter* Count;

};

struct Counter{
    int word_count = 0;
};

int wordCompare(char*, char*);

int checkWord(char);

int mostUsedWord(ifstream&, int numofWords);


#endif
