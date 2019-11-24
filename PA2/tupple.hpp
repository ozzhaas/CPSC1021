/************************
*Kellen Haas
*CPSC1020 Fall19
*Section: 002
*mkhaas
*Instructor: Dr. Feaster
************************/

#ifndef TUPPLE_HPP
#define TUPPLE_HPP

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


tuple<int, int, int> splitDate(string Date);
tuple<int, int> splitTime(string Time);

#endif
