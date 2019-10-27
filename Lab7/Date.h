#ifndef DATE_H
#define DATE_H

#include <string>
#include <sstream>
#include <iomanip>
#include <vector>
#include <fstream>
#include <iostream>
#include <algorithm>
#include <iostream>
using namespace std;

/**
  This class represents a simple date and provides a compare
  function for sorting purposes. Also a print() method for well
  formatted printing using stringstream.
**/
class Date {
  private:
    // Basic data members: private so only Date can see them
    int month, day, year;

  public:
    // Static compare function called using the Date:: scope
    static bool compare(Date& rhs, Date& lhs);
    // Static string array used in print() to get month names
    static const string MONTHS[12];

    //constructor and destructor
    Date(int m = 1, int d = 1, int y = 1900);// Done but needs check//

    ~Date ();


    // Getter/setter for month
    int get_month() const;
    void set_month(int month);

    // Getter/setter for day
    int get_day() const;
    void set_day(int day);

    // Getter/setter for year
    int get_year() const;
    void set_year(int year);

    // Produces string representation of Date using stringstream
    string print();
};



#endif
