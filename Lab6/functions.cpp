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
void printData(ofstream& output, Student* pupil, int count){


    output << pupil[count].firstName << endl;
    output << pupil[count].lastName << endl;
    output << pupil[count].bday->month << endl;
    output << pupil[count].bday->day << endl;
    output << pupil[count].bday->year << endl;

}


void readData(ifstream& input, Student* pupil, int count){

        //pupil[count].bday = (Date*)malloc(sizeof(Date));
        pupil = (Student*)malloc(sizeof(Student));
        input >> pupil[count].firstName;
        input >> pupil[count].lastName;
        input >> pupil[count].bday->month;
        input >> pupil[count].bday->day;
        input >> pupil[count].bday->year;
}
