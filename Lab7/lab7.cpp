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

    Date temp;
    for (int i = 0; i < static_cast <int>(dates.size()); i++) {
        inputFile >> month;
        inputFile >> day;
        inputFile >> year;
        temp.get_month(month);
        temp.get_day(day);
        temp.get_year(year);
        dates[i].push_back(temp);
    }

    /*for (int j = 0; j < static_cast <int>(dates.size()); j++) {
        cout << dates[j] << endl;
    }*/




return 0;
}
