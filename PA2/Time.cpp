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


void Time::printTime(fstream& output) const{
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
    output << displayHour << ":";
    output << setw(2) << setfill('0') << minute << " " << xm << endl;
}


bool Time::isTimeValid(){
    if ((hour < 0) || (hour > 24) || (minute < 0) || (minute > 59)){
        return false;
    }
    return true;
}
