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


/**********************************************************************
  tuple<int, int, int> splitDate function:
  This function will parse the date string that is taken in from the
  input file using the tuple c++ function. The function will then
  convert the date values to integers and return them as three separate
  integers, month, day, and year.

  Parameters: string Date

  Return: a tuple of Date with values int month, int day, and int year.
**********************************************************************/
tuple<int, int, int> splitDate(string Date);


/**********************************************************************
  tuple<int, int> splitTime function:
  This function will parse the time string that is taken in from the
  input file using the tuple c++ function. The function will then
  convert the time values to integers and return them as two separate
  integers, hour and minute.

  Parameters: string Time

  Return: a tuple of Time with values int hour and int minute.
**********************************************************************/
tuple<int, int> splitTime(string Time);

#endif
