/************************
*Kellen Haas
*CPSC1020 Fall19
*Section: 002
*mkhaas
*Instructor: Dr. Feaster
************************/
#ifndef TIME_HPP
#define TIME_HPP

#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
#include <sstream>
#include <iomanip>
#include <fstream>

using namespace std;

class Time {

    private:
        int hour;
        int minute;

    public:
        Time();
    /************************************************************************
      Time Constructor:
      Constructs a Time object with values hour and minute.

      Parameters: int hours, int mins

      Return: none
    ************************************************************************/
        Time(int, int);


    /************************************************************************
      Setters:
      Set the Time objects variable values for hour and minute and then the
      last one sets the objects variables for hour and minute in the same
      setter.

      Parameters: int hours, int mins

      Return: void
    ************************************************************************/
        void setHour(int);
        void setMinute(int);
        void setTime(int, int);

    /************************************************************************
      Getters:
      Get the Time objects variable values for hour and minute.

      Parameters: none

      Return: hour and minute values respectively
    ************************************************************************/
        int getHour() const;
        int getMinute() const;

    /************************************************************************
      printTime function:
      Prints the Time object to an output filestream converting hours
      from military time to regular time. The format of the printing
      hours:minutes 10:00 pm or am. If it is noon it will print 12:00 noon.

      Parameters: fstream& output

      Return: hour and minute values respectively
    ************************************************************************/
        void printTime(fstream&) const;


    /************************************************************************
      isTimeValid function:
      Checks that the hours are between 0 and 24 and minutes are between 0
      and 59.

      Parameters: none

      Return: bool; true if the time is valid or false if it is not
    ************************************************************************/
        bool isTimeValid();


};

#endif
