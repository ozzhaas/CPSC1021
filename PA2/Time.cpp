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
    hour = hours;
    minute = mins;
}


void Time::setHour(int hours){
    hour = hours;
}


void Time::setMinute(int mins){
    minute = mins;
}


void Time::setTime(int hours, int mins){
    hour = hours;
    minute = mins;

}


int Time::getHour() const{
    return hour;
}


int Time::getMinute() const{
    return minute;
}


void Time::printTime(ofstream& output) const{
/*When printing the time you must convert hours from military time to regular time.
The format of the printing hours:minutes 10:00
pm or am. If it is noon you are to print 12:00 noon.*/
    string xm = "am";
    int displayHour = hour;
    if (displayHour > 12) {
        displayHour = displayHour - 12;
        xm = "pm";
    }
    else if (displayHour == 0) {
        displayHour = 12;
    }
    else if (displayHour == 12) {
        xm = "noon";
    }
    output << displayHour << ":" << setfill('0') << setw(2) << minute
           << " " << xm << endl;
}


bool Time::isTimeValid(){
/*checks that the hours and minutes are between 0 and 24 and minutes are between 0
and 59.*/
    if ((hour < 0) || (hour > 24) || (minute < 0) || (minute > 59)){
        return false;
    }
    return true;
}
