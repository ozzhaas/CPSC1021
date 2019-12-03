/************************
*Kellen Haas
*CPSC1020 Fall19
*Section: 002
*mkhaas
*Instructor: Dr. Feaster
************************/
#ifndef DATE_HPP
#define DATE_HPP

#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
#include <sstream>
#include <iomanip>
#include <fstream>

using namespace std;

class Date {

    private:
        int month;
        int day;
        int year;

    public:
        Date();

    /************************************************************************
      Date Constructor:
      Constructs a Date object with a month, day and year.

      Parameters: int m, int d, int y

      Return: none
    ************************************************************************/
        Date(int m, int d, int y);



    /************************************************************************
      Setter functions:
      These functions set the month, day, and year in the Date class because
      they are private variables.

      Parameters: int m or int d or int y

      Return: void
    ************************************************************************/
        void setMonth(int);
        void setDay(int);
        void setYear(int);
        void setDate(int, int, int);


    /************************************************************************
      Getter functions:
      These functions get the month, day, and year from the Date object
      because they are private variables.

      Parameters: none

      Return: string version of month, int month, int day, int year
    ************************************************************************/
        string getStrMonth();
        int getMonth() const;
        int getDay() const;
        int getYear() const;


    /************************************************************************
      printDate() function:
      This function is used to print the date portion of the CalendarEvent.
      The format of the date should be in the form of: January 1, 2019. It
      takes in an output filestream to output the date of the CalendarEvent
      to.

      Parameters: fstream& output

      Return: void
    ************************************************************************/
        void printDate(fstream&);


    /************************************************************************
      isDateValid() function:
      This function is used make sure the months are within 1 – 12, the
      years are between 1900 – 2020 and the day is between 1 and 31.
      If the month is February the day can only be 29 if it is leap year.
      Therefore, the function checks for this too. It will also make sure
      the day given did not exceed the number of days for that month.
      If the function fails any of the validity checks you are to return false.

      Parameters: none

      Return: bool; true if the date is valid or false if it is not
    ************************************************************************/
        bool isDateValid();

    /************************************************************************
      isLeapYear() function:
      This function will determine if the year read in is a leap year by
      checking if it is a multiple of 4 and not a multiple of 400.

      Parameters: none

      Return: bool; true if the year is a leap year or false if it is not
    ************************************************************************/
        bool isLeapYear();

    /************************************************************************
      static const string MONTH[]:
      An array of the string version of months used to convert the month to
      its word version for the printDate function.

      Parameters: none

      Return: static const string
    ************************************************************************/
        static const string MONTH[];

};

#endif
