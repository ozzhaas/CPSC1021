/************************
*Kellen Haas
*CPSC1020 Fall19
*Section: 002
*mkhaas
*Instructor: Dr. Feaster
************************/
#ifndef SORT_HPP
#define SORT_HPP

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
  compareDate function:
  This function will take in two CalendarEvent objects and compare the
  values of their dates and their times to be used in sorting them
  in the sortDate function.
  It will check first is the years are equal
  	-> if they are, check if the first's month is less than the second's
		-> if it is it will return true
	-> else if check if the months are equal
		-> if they are it will check if the first's day is less than
		   the second's and return true if it is.
		-> else if the first isn't less than the second, checks if they are
		   equal
		   		-> if the days are equal
				   	   -> checks if the first's hour is less than the
					      second's hour and if it is returns true
					   -> else if the hours are equal, check if the first's
						  minute is less than the second's minute and
						  if it is returns true
					   -> if the hours are equal and the first's minute
					      is not less than the second's return false.
				-> if the first's day is not less than the second and
				   the two days are not equal return false.
	-> if the first's month isn't less than or equal to the second's
		   return false.


  Parameters: CalendarEvent lhs, CalendarEvent rhs

  Return: Bool value of true or false, see the diagram above.
**********************************************************************/
bool compareDate(CalendarEvent lhs, CalendarEvent rhs);



/************************************************************************
  sortDate function:
  This function will take a vector as the parameter (passed by reference)
  and call std::sort to sort the function using the compareDate function
  above to compare the elements of the vector.

  Parameters: vector<CalendarEvent>& sortVec

  Return: void necause the vector is passed by reference so there is no
  		  need for a return value.
************************************************************************/
void sortDate(vector<CalendarEvent>&);

#endif
