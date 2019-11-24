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
#include <fstream>
#include <sstream>
#include <iomanip>
#include <string>
#include <tuple>
#include "CalendarEvent.hpp"

using namespace std;

void readDate(ifstream&, vector<CalendarEvent>&, vector<CalendarEvent>&);
bool checkArguments(int argc);
bool compareDate(CalendarEvent lhs, CalendarEvent rhs);
void sortDate(vector<CalendarEvent>&);
void isOpen(fstream&, char*);
tuple<int, int, int> splitDate(string Date);
tuple<int, int> splitTime(string Time);
