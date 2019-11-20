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
#include "Date.hpp"
#include "Time.hpp"

using namespace std;

class CalendarEvent {

    private:
        string eventName;
        Time calTime;
        Date calDate;

    public:

        CalendarEvent(int month = 0, int day = 0, int year = 0, int hour = 0,
                      int minute = 0, string eventName = "unknown");
        void printCalendar(ofstream& out);
        bool isEventDateValid();
        bool isEventTimeValid();
        string getEvent() const;

};
