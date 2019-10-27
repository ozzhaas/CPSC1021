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




// Implement the constructor
Date::Date(int m, int d, int y) {
    month = 1;
    day = 1;
    year = 1900;
}


// Compare function which is true if lhs is earlier than rhs
bool Date::compare(Date& lhs, Date& rhs) {
    if ((lhs.year < rhs.year) && (lhs.month < rhs.month) && (lhs.day < rhs.day)){
        return true;
    }
    else {
        return false;
    }

}


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


// Returns a well formatted string representation of this Date
string Date::print() {
    stringstream string;
        string << left << setw(10) << MONTHS[month - 1] << setw(3) << day
        << setw(5) << year << endl;

    return string.str();

}
