/************************
*Kellen Haas
*CPSC1020 Fall19
*Section: 002
*mkhaas
*Instructor: Dr. Feaster
************************/
#include "CalendarEvent.hpp"

CalendarEvent::CalendarEvent(int month, int day, int year, int hour, int minute, string eventName){
    calTime = Time(hour, minute);
    calDate = Date(month, day, year);
}



// void CalendarEvent::printCalendar(fstream& out){
//
//
// }
//
//
// bool CalendarEvent::isEventDateValid(){
//
//
// }
//
//
// bool CalendarEvent::isEventTimeValid(){
//
//
//
// }

//
// string CalendarEvent::getEvent() const{
//
// }
