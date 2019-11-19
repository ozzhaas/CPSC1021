/************************
*Kellen Haas
*CPSC1020 Fall19
*Section: 002
*mkhaas
*Instructor: Dr. Feaster
************************/
#include "Date.hpp"

Date::Date(){
    month = m;
    day = d;
    year = y;
}

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


// void Date::printDate(fstream&){
//
// }


// bool Date::isDateValid(){
//
// }
//
//
// bool Date::isLeapYear(){
//
// }


const string Date::MONTH[13]{
    "JANUARY", "FEBRUARY", "MARCH", "APRIL", "MAY",
    "JUNE", "JULY", "AUGUST", "SEPTEMBER", "OCTOBER",
    "NOVEMBER", "DECEMBER"
};
