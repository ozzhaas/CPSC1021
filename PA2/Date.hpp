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

class Date {

    private:
        int month;
        int day;
        int year;

    public:
        Date(int m, int d, int y);
        void setMonth(int);
        void setDay(int);
        void setYear(int);
        void setDate(int, int, int);
        string getStrMonth();
        int getMonth() const;
        int getDay() const;
        int getYear() const;
        void printDate(fstream&);
        bool isDateValid();
        bool isLeapYear();
        static const string MONTH[13];

};
