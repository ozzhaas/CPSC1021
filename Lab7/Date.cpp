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
Date::Date(int month, int day, int year) {
    month = 1;
    day = 1;
    year = 1900;
}

Date::~Date() {}


// Compare function which is true if lhs is earlier than rhs
bool Date::compare(Date& lhs, Date& rhs) {
    if ((lhs.year < rhs.year) && (lhs.month < rhs.month) && (lhs.day < rhs.day)){
        return true;
    }
    else {
        return false;
    }

}


// IMPLEMENTING GETTERS AND SETTERS //

/******************************/



// Returns a well formatted string representation of this Date
string Date::print() {
  // IMPLEMENT
}
