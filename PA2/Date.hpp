/************************
*Kellen Haas
*CPSC1020 Fall19
*Section: 002
*mkhaas
*Instructor: Dr. Feaster
************************/
#ifndef DATE_HPP
#define DATE_HPP

#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
#include <sstream>
#include <iomanip>
#include <fstream>

using namespace std;

class Date {

    private:
        int month;
        int day;
        int year;

    public:
        Date();
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
        static const string MONTH[];

};

#endif
