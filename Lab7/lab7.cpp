//Kellen Haas
//CPSC1021
//Sec. 001-F19
//mkhaas@g.clemson.edu
//Damion
//10/22/19

#include "Date.h"
#include "Date.cpp"


int main (int argc, char* argv[]) {
    int numofDates;
    int month;
    int day;
    int year;

    ifstream inputFile;
    inputFile.open(argv[1]);
    inputFile >> numofDates;

    vector<Date> vec_dates;

    Date dates[numofDates + 1];
    for (int i = 0; i < static_cast<int> (numofDates - 1); i++) {
        inputFile >> month;
        inputFile >> day;
        inputFile >> year;
        vec_dates.push_back(month);
        vec_dates.push_back(day);
        vec_dates.push_back(year);

    }
    Date test;
    vec_dates.push_back(test.day);
    vec_dates.push_back(test.month);
    vec_dates.push_back(test.year);

    sort(&dates[0], &dates[numofDates], Date::compare);

    


return 0;
}
