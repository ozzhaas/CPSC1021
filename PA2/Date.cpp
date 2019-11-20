/************************
*Kellen Haas
*CPSC1020 Fall19
*Section: 002
*mkhaas
*Instructor: Dr. Feaster
************************/
#include "Date.hpp"

Date::Date(){}

Date::Date(int m, int d, int y){
    month = m;
    day = d;
    year = y;
}


void Date::setMonth(int m){
    month = m;
}


void Date::setDay(int d){
    day = d;
}


void Date::setYear(int y){
    year = y;
}


void Date::setDate(int m, int d, int y){
    month = m;
    day = d;
    year = y;
}


string Date::getStrMonth(){
    return MONTH[month-1];
}


int Date::getMonth() const{
    return month;
}


int Date::getDay() const{
    return day;
}


int Date::getYear() const{
    return year;
}


void Date::printDate(fstream&){
    //This function is used to print the date portion of the calendar event.
    //The format of the date should be in the form of: January 1, 2019
}


// bool Date::isDateValid(){
/*making sure the months are with in 1 – 12, the years are between 1900 – 2020 and the day is between 1 and 31. If the
month is February the day can only be 29 if it is leap year. Therefore, you will need to check this. You
should also make sure the day given did not exceed the number of days for that month. If the function
fells any of the validity checks you are to return false.*/
// }
//
//
// bool Date::isLeapYear(){
/*This function will determine if the year read in is a leap year. Look up the rules for
determining leap year.*/
// }


const string Date::MONTH[13]{
    "JANUARY", "FEBRUARY", "MARCH", "APRIL", "MAY",
    "JUNE", "JULY", "AUGUST", "SEPTEMBER", "OCTOBER",
    "NOVEMBER", "DECEMBER"
};
