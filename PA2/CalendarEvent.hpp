/************************
*Kellen Haas
*CPSC1020 Fall19
*Section: 002
*mkhaas
*Instructor: Dr. Feaster
************************/
#ifndef CALENDAREVENT_HPP
#define CALENDAREVENT_HPP

#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
#include <sstream>
#include <iomanip>
#include "Date.hpp"
#include "Time.hpp"

using namespace std;

class CalendarEvent {

    private:
        string eventName;
        Time calTime;
        Date calDate;

    public:

/************************************************************************
  CalendarEvent Constructor:
  Constructs a CalendarEvent object with a month, day, year, hour,
  minute, and name. Also creates a Date object and a Time object with
  the values from the constructor parameter and uses setName to set
  the value of the name of the CalendarEvent.

  Parameters: int month, int day, int year, int hour, int minute,
              string name
************************************************************************/
        CalendarEvent(int month, int day, int year, int hour,
                      int minute, string name);

/************************************************************************
  Getters get an instance of the month, day, year, hour, minute, and
  name from the object created and return the variable stored in the
  object.

  Parameters: none

  Return: year, month, day, hour, minute and name respectively
************************************************************************/
        int getYear() const;
        int getMonth() const;
        int getDay() const;
        int getHour() const;
        int getMinute() const;

/************************************************************************
  printCalendar() function:
  This function takes an output filestream as a parameter and prints
  a fully constructed CalendarEvent to the output file.

  Parameters: fstream& out

  Return: void
************************************************************************/
        void printCalendar(fstream& out);

/************************************************************************
  isEventDateValid() function:
  This function calls the isDateValid function to check that the Date
  values of the Date object created in the constructor are valid dates.

  Parameters: none

  Return: bool; true if they are valid or false if not
************************************************************************/
        bool isEventDateValid();

/************************************************************************
  isEventTimeValid() function:
  This function calls the isTimeValid function to check that the Time
  values of the Time object created in the constructor are valid times.

  Parameters: none

  Return: bool; true if they are valid or false if not
************************************************************************/
        bool isEventTimeValid();

/************************************************************************
  setEvent() function:
  This function sets the eventName in the CalendarEvent class because it
  is a private variable.

  Parameters: string name

  Return: void
************************************************************************/
        void setEvent(string name);

/************************************************************************
  getEvent() function:
  This function gets the eventName in the CalendarEvent class because it
  is a private variable.

  Parameters: none

  Return: string eventName
************************************************************************/
        string getEvent() const;

        void printEvent(fstream&);

};

#endif
