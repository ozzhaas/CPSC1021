/* Kellen Haas
CPSC 1021
Sec. 001 - F19
10/08/19
mkhaas@clemson.edu
Damion*/

#include "functions.h"



void ascNameSort(Student* pupil, int numofStudents){
    Student temp;

    for (int i = 0; i < numofStudents - 1; i++) {
        for (int j = 0; j < numofStudents -1 - i; j++) {
            if (pupil[j].lastName > pupil[j + 1].lastName) {
                temp = pupil[j];
                pupil[j] = pupil[j + 1];
                pupil[j + 1] = temp;
            }
        }
    }

}

void decNameSort(Student* pupil, int numofStudents){
    Student temp;

    for (int i = 0; i < numofStudents - 1; i++) {
        for (int j = 0; j < numofStudents -1 - i; j++) {
            if (pupil[j].lastName < pupil[j + 1].lastName) {
                temp = pupil[j];
                pupil[j] = pupil[j + 1];
                pupil[j + 1] = temp;
            }
        }
    }
}


void printData(ofstream& output, Student* pupil, int numofStudents){
    string first;
    string last;
    int month = 0;
    int day = 0;
    int year = 0;



    int i = 0;
    while (i < numofStudents){
        first = pupil[i].firstName;
        last = pupil[i].lastName;
        month = pupil[i].bday.month;
        day = pupil[i].bday.day;
        year = pupil[i].bday.year;
        output << first << " " << last << " " << month << " " << day << " " << year << endl;
        i++;
    }
}


void readData(ifstream& input, Student* pupil){
    string first;
    string last;
    int month = 0;
    int day = 0;
    int year = 0;

    int i = 0;
    while(input >> first >> last >> month >> day >> year) {
        //read input
        pupil[i].firstName = first;
        pupil[i].lastName = last;
        pupil[i].bday.month = month;
        pupil[i].bday.day = day;
        pupil[i].bday.year = year;

        i++;
    }
}
