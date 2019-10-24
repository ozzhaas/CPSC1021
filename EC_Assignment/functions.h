#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#include <string>
#include <iostream>
#include <algorithm>
#include <fstream>
#include <cstring>
using namespace std;

typedef struct {
    string word[10000000];
    string maxWord;
    int Count;

}wordStruct;

//struct Counter{
//    int word_count = 0;
//};

int wordCompare(char*, char*);

int checkWord(char);

int mostUsedWord(ifstream&, int numofWords);


#endif
