/************************
*Kellen Haas
*CPSC1020 Fall19
*Section: 002
*mkhaas
*Instructor: Dr. Feaster
************************/
#include "CalendarEvent.hpp"

CalendarEvent::CalendarEvent(int month, int day, int year, int hour, int minute, string eventName){
    Date calDate(month, day, year);
	Time calTime(hour, minute);
}



void CalendarEvent::printCalendar(ofstream& output){
	calDate.printDate(output);
	cout << "Printing time..." << endl;
	calTime.printTime(output);
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


string CalendarEvent::getEvent() const{
	return eventName;
}
