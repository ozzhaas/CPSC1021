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
void checkArguments(int argc);
void isOpen(fstream&, char*);
std::tuple<int, int, int> splitDate(string Date);
std::tuple<int, int> splitTime(string Time);
