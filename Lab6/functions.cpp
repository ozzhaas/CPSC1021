/* Kellen Haas
CPSC 1021
Sec. 001 - F19
10/08/19
mkhaas@clemson.edu
Damion*/

#include "functions.h"



void ascNameSort(Student* pupil){




}

void decNameSort(Student* pupil){



}
void printData(ofstream& output, Student* pupil){
    string first;
    string last;
    int month = 0;
    int day = 0;
    int year = 0;


    int i = 0;
    while (output << year){
        output << first;
        output << last;
        output << month;
        output << day;
        output << year;

        first = pupil[i].firstName;
        last = pupil[i].lastName;
        month = pupil[i].bday->month;
        day = pupil[i].bday->day;
        year = pupil[i].bday->year;
    }

}


void readData(ifstream& input, Student* pupil){
    string first;
    string last;
    int month = 0;
    int day = 0;
    int year = 0;



    cout << "HERE";
    int i = 0;
    while(input >> year) {
        input >> first;
        input >> last;
        input >> month;
        input >> day;
        input >> year;

        pupil[i].firstName = first;
        pupil[i].lastName = last;
        pupil[i].bday->month = month;
        pupil[i].bday->day = day;
        pupil[i].bday->year = year;


    }
}
