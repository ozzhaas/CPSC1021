/**********************
  Kellen Haas
  CPSC1021
  Sec. 001-F19
  mkhaas@g.clemson.edu
  Damion
  10/27/19
 *********************/



#include "Date.h"

// Just an array of strings. Access a month using:
// Date::MONTHS[0] ---> "JANUARY"
const string Date::MONTHS[] = {
  "JANUARY", "FEBRUARY", "MARCH", "APRIL", "MAY",
  "JUNE", "JULY", "AUGUST", "SEPTEMBER", "OCTOBER",
  "NOVEMBER", "DECEMBER"
};


// Implemented the constructor
Date::Date(int m, int d, int y) {
    month = m;
    day = d;
    year = y;
}


// Implemented the destructor
Date::~Date() {}


/*Compare function is used to take two instances of Date
  and compare them to see which one is earlier than the other.
  Returning true tells the sort function it is earlier, while
  returning false tells the sort function is it later.*/
bool Date::compare(Date& lhs, Date& rhs) {

    //If the first dates year is earlier than the 2nd return true//
    if (lhs.year < rhs.year) {
        return true;
    }
    else {
        //Covers the instance of the years being equal//
        if (lhs.year == rhs.year) {
            /*If the months are not equal, and the first dates month is
              earlier than the 2nd return true*/
            if (lhs.month < rhs.month) {
                return true;
            }
            /*Else if the months are also equal then check the days*/
            else if (lhs.month == rhs.year) {
                /*If the first dates day is earlier than the 2nd
                  return true*/
                if (lhs.day < rhs.day) {
                    return true;
                }
                /*Else if the first dates day is later than the second or the
                  first dates day and the second dates day are equal,
                  return false*/
                else {
                    return false;
                }
            }
        }
        /*If the first dates year is later than the second dates year
          return false*/
        else {
            return false;
        }
    }
    //Default return true//
    return true;
}


/*Implemenation and definition of getters and setters
  The getters and setters are used to take in the value of
  the dates and set the Date classes values to those input
  values*/
int Date::get_month() const {
  return month;
}
void Date::set_month(int m) {
  month = m;
}


int Date::get_day() const {
    return day;
}
void Date::set_day(int d) {
    day = d;
}


int Date::get_year() const {
    return year;
}
void Date::set_year(int y) {
    year = y;
}


/*Uses stringstream to return a well formatted string
  representation of this Date*/
string Date::print() {
    stringstream string;
        string << left << setw(10) << MONTHS[month - 1] << setw(3) << day
        << setw(5) << year << endl;

    //Returns a formatted string to print to the output file//
    return string.str();

}
