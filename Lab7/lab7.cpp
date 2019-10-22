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

    vector<Date> dates;


    for (int i = 0; i < static_cast <int>(dates.size()); i++) {
        inputFile >> month >> day >> year;
        set_month(month);
        set_day(day);
        set_year(year);
        dates[i].emplace_back(Date);
    }

    for (int j = 0; j < static_cast <int>(dates.size()); j++) {
        cout << static_cast<int> (dates[j]) << endl;

    }




return 0;
}
