/**********************
  Kellen Haas
  CPSC1021
  Sec. 001-F19
  mkhaas@g.clemson.edu
  Damion
  10/27/19
 *********************/


#include "Date.h"


int main (int argc, char* argv[]) {

    //Temporary main variables declared//
    int numofDates = 0;
    int month;
    int day;
    int year;
    string temp_str;


    /************************************
        Opens the input and output files
        based on the users command line
        arguments.
    ************************************/
    ifstream inputFile;
    inputFile.open(argv[1]);
    ofstream outputFile;
    outputFile.open(argv[2]);


    /*********************************
        Receives the input number of
        dates and actual dates from
        the input file
    **********************************/
    inputFile >> numofDates;


    /*Creates a vector to store all of the dates
      from the input file*/
    vector<Date> vec_dates;

    //Loops through the number of dates to store the dates in the vector//
    for (int i = 0; i < static_cast<int> (numofDates); i++) {
           inputFile >> month;
           inputFile >> day;
           inputFile >> year;
           Date temp(month, day, year);
           vec_dates.push_back(temp);
    }
    Date test();


    /*Call the sort function to go through the dates from beginning to end
      and sort them in order from the earliest date to the latest*/
    sort(vec_dates.begin(), vec_dates.end(), Date::compare);


    /*For loop used to store all the vector elements in a temporary strings
      and then print them to the output file using stringstream*/
    for (int k = 0; k < static_cast<int> (numofDates); k++) {
        temp_str = vec_dates[k].print();
        outputFile << temp_str;

    }

    //Close both the input and output files//
    inputFile.close();
    outputFile.close();


return 0;
}
