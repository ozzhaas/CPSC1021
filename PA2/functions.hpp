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
#include "tuple.hpp"

using namespace std;


/***********************************************************************
  readDate function:
  This function takes parameters of an input filestream and both a good
  and bad vector. The function will then read in the Calendar Events
  from the input file and splice them so that I can access the
  individual name, date, and time of the event. Then it will call
  setters for the Date and Time classes to set the values of the private
  variables to the values from the input file. Finally, it will push
  back the valid Calendar Events onto the goodVec and the bad ones onto
  the badVec. It will then sort the Calendar Events by date and time
  from most impending to least impending.

  Parameters: fstream input filestream, a good vector, and a bad vector

  Return:     Void
***********************************************************************/
void readDate(fstream&, vector<CalendarEvent>&, vector<CalendarEvent>&);

/**********************************************************************
  checkArguments function:
  This function will check to make sure the user has entered the
  proper number of comand line functions.

  Parameters: int argc which is the number of command line arguments
  			  including the ./a.out (in this function we should have 4).

  Return:     bool value; returns true if there are enough command line
  		      arguments entered or prints an error message, exits the
		  	  program and returns false if there are not enough command
		      line arguments.
**********************************************************************/
bool checkArguments(int argc);


/**********************************************************************
  isOpen function:
  This function will check to make sure that the files the user
  entered on the command line open properly and that the program isn't
  trying to read in integers from the file as strings or vice versa.

  Parameters: fstream& file, char* fileName, ios::openmode openFor
  			  File is the file that is sent to the function from the
			  call in main, could be input or output files. FileName is
			  obviously the file name to open. openFor will tell the
			  program if we are opening an input or an output file.

  Return:     Void
**********************************************************************/
void isOpen(fstream&, char*, ios::openmode);


#endif
