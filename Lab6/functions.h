/* Kellen Haas
CPSC 1021
Sec. 001 - F19
10/08/19
mkhaas@clemson.edu
Damion*/

#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#include <string>
#include <iostream>
#include <algorithm>
#include <fstream>
#include <cstring>
using namespace std;

typedef struct {
    int month, day, year;
}Date;

typedef struct {
    string firstName;
    string lastName;
    Date* bday;
}Student;

void ascNameSort(Student*);
void decNameSort(Student*);
void printData(ofstream&, Student*, int);
void readData(ifstream&, Student*, int);

#endif
