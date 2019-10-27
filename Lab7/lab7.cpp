//Kellen Haas
//CPSC1021
//Sec. 001-F19
//mkhaas@g.clemson.edu
//Damion
//10/22/19


#include "Date.h"


int main (int argc, char* argv[]) {
    int numofDates;
    int month;
    int day;
    int year;
    string temp_str;

    ifstream inputFile;
    inputFile.open(argv[1]);
    ofstream outputFile;
    outputFile.open(argv[2]);

    inputFile >> numofDates;

    vector<Date> vec_dates;

    for (int i = 0; i < static_cast<int> (numofDates); i++) {
        inputFile >> month;
        inputFile >> day;
        inputFile >> year;
        vec_dates.emplace_back(month, day, year);

    }
    Date test;
    vec_dates.emplace_back(test);

    for (int j = 0; j < static_cast<int> (numofDates); j++) {
        Date d1 = vec_dates[j];
        Date d2 = vec_dates[j + 1];
    }

    sort(vec_dates.begin(), vec_dates.end(), Date::compare);


    for (int k = 0; k < static_cast<int> (numofDates); k++) {
        temp_str = vec_dates[k].print();
        outputFile << temp_str;

    }
    inputFile.close();
    outputFile.close();


return 0;
}
