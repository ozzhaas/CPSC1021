/************************
*Kellen Haas
*CPSC1020 Fall19
*Section: 002
*mkhaas
*Instructor: Dr. Feaster
************************/
#ifndef CALENDAREVENT_HPP
#define CALENDAREVENT_HPP

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

        CalendarEvent(int month, int day, int year, int hour,
                      int minute, string name);
        int getYear() const;
        int getMonth() const;
        int getDay() const;
        int getHour() const;
        int getMinute() const;
        void printCalendar(fstream& out);
        bool isEventDateValid();
        bool isEventTimeValid();
        void setEvent(string name);
        string getEvent() const;

};

#endif
