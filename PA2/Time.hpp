/************************
*Kellen Haas
*CPSC1020 Fall19
*Section: 002
*mkhaas
*Instructor: Dr. Feaster
************************/
#ifndef TIME_HPP
#define TIME_HPP

#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
#include <sstream>
#include <iomanip>
#include <fstream>

using namespace std;

class Time {

    private:
        int hour;
        int minute;

    public:
        Time();
        Time(int, int);
        void setHour(int);
        void setMinute(int);
        void setTime(int, int);
        int getHour() const;
        int getMinute() const;
        void printTime(fstream&) const;
        bool isTimeValid();


};

#endif
