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

    Date dates[numofDates];
    for (int i = 0; i < static_cast <int>(numofDates); i++) {
        inputFile >> month;
        inputFile >> day;
        inputFile >> year;
        vec_dates.push_back(month);
        vec_dates.push_back(day);
        vec_dates.push_back(year);

        dates[i].set_month(month);
        dates[i].set_day(day);
        dates[i].set_year(year);
    }


    /*for (int j = 0; j < static_cast <int>(dates.size()); j++) {
        cout << dates[j] << endl;
    }*/




return 0;
}
