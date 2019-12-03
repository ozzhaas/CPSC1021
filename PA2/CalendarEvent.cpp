/************************
*Kellen Haas
*CPSC1020 Fall19
*Section: 002
*mkhaas
*Instructor: Dr. Feaster
************************/
#include "CalendarEvent.hpp"

CalendarEvent::CalendarEvent(int month, int day, int year, int hour, int minute, string name){
    calDate.setDate(month, day, year);
    calTime.setTime(hour, minute);
    setEvent(name);
}

int CalendarEvent::getYear() const{
    return calDate.getYear();
}

int CalendarEvent::getMonth() const{
    return calDate.getMonth();
}

int CalendarEvent::getDay() const{
    return calDate.getDay();
}

int CalendarEvent::getHour() const {
    return calTime.getHour();
}

int CalendarEvent::getMinute() const{
    return calTime.getMinute();
}

void CalendarEvent::printCalendar(fstream& output){
    output << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
    output << getEvent() << endl;
    calDate.printDate(output);
	calTime.printTime(output);
    output << setfill(' ');
    output << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl << endl << endl;
}


bool CalendarEvent::isEventDateValid(){
	if (calDate.isDateValid() == true) {
		return true;
	}
	return false;
}


bool CalendarEvent::isEventTimeValid(){
	if (calTime.isTimeValid() == true) {
		return true;
	}
	return false;
}

void CalendarEvent::setEvent(string name) {
    eventName = name;
}


string CalendarEvent::getEvent() const{
	return eventName;
}
