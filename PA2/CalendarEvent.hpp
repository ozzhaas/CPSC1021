/************************
*Kellen Haas
*CPSC1020 Fall19
*Section: 002
*mkhaas
*Instructor: Dr. Feaster
************************/
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
#include <sstream>
#include <iomanip>

class CalendarEvent {

    private:
        string eventName;
        Time calTime;
        Date calDate;

    public:

        CalendarEvent(int month = 0, int day = 0, int year = 0, int hour = 0, int minute = 0, string eventName = "unknown");
        void printCalendar(fstream& out);
        bool isEventDateValid();
        bool isEventTimeValid();
        string getEvent() const;

};
