//Kellen Haas
//CPSC1021
//Sec. 001-F19
//mkhaas@g.clemson.edu
//Damion
//10/22/19


#include "Date.h"
#include <iostream>

// Just an array of strings. Access a month using:
// Date::MONTHS[0] ---> "JANUARY"
const string Date::MONTHS[] = {
  "JANUARY", "FEBRUARY", "MARCH", "APRIL", "MAY",
  "JUNE", "JULY", "AUGUST", "SEPTEMBER", "OCTOBER",
  "NOVEMBER", "DECEMBER"
};


Date::~Date() {}

// Implement the constructor

// Compare function which is true if lhs is earlier than rhs
bool Date::compare(Date& lhs, Date& rhs) {
  // IMPLEMENT

}


// IMPLEMENTING GETTERS AND SETTERS //
int Date::get_month() const {
  return month;
}
void Date::set_month(int m) {
  month = m;
}
/******************************/
int Date::get_day() const {
    return day;
}
void Date::set_day(int d){
    day = d;
}
/******************************/
int Date::get_year() const {
    return year;
}
void Date::set_year(int y){
    year = y;
}
/******************************/



// Returns a well formatted string representation of this Date
string Date::print() {
  // IMPLEMENT
}
