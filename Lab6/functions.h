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

struct Date{
    int month, day, year;
};

struct Student{
    string firstName;
    string lastName;
    Date bday;
};

void ascNameSort(Student*, int);
void decNameSort(Student*, int);
void printData(ofstream&, Student*, int);
void readData(ifstream&, Student*);

#endif
