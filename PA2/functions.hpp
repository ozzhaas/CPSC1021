/************************
*Kellen Haas
*CPSC1020 Fall19
*Section: 002
*mkhaas
*Instructor: Dr. Feaster
************************/
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
#include <sstream>
#include <iomanip>


void readDate(fstream&, vector<CalendarEvent>&, vector<CalendarEvent>&);
void checkArguments(int argc);
void isOpen(fstream&, char*);
