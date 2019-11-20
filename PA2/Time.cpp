/************************
*Kellen Haas
*CPSC1020 Fall19
*Section: 002
*mkhaas
*Instructor: Dr. Feaster
************************/
#include "Time.hpp"

Time::Time(){}

Time::Time(int hours, int mins){
    hours = hour;
    mins = minute;
}


void Time::setHour(int hours){
    hours = hour;
}


void Time::setMinute(int mins){
    mins = minute;
}


int Time::getHour(){
    return hour;
}


int Time::getMinute(){
    return minute;
}


// void Time::printTime(fstream&) const{
/*When printing the time you must convert hours from military time to regular time.
The format of the printing hours:minutes 10:00
pm or am. If it is noon you are to print 12:00 noon.*/
// }


// bool Time::isTimeValid(){
/*checks that the hours and minutes are between 0 and 24 and minutes are between 0
and 59.*/
// }
