/************************
*Kellen Haas
*CPSC1020 Fall19
*Section: 002
*mkhaas
*Instructor: Dr. Feaster
************************/
#ifndef FUNCTIONS_HPP
#define FUNCTIONS_HPP

#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
#include <fstream>
#include <sstream>
#include <iomanip>
#include <string>
#include <tuple>
#include "CalendarEvent.hpp"
#include "tupple.hpp"

using namespace std;

void readDate(fstream&, vector<CalendarEvent>&, vector<CalendarEvent>&);
bool checkArguments(int argc);
void isOpen(fstream&, char*, ios::openmode);


#endif
