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

using namespace std;

class Time {

    private:
        int hour;
        int minute;

    public:
        Time(int hours, int mins);
        void setHour();
        void setMinute();
        int getHour();
        int getMinute();
        void printTime(fstream&) const;
        bool isTimeValid();


};
