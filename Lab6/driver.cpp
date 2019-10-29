/* Kellen Haas
CPSC 1021
Sec. 001 - F19
10/08/19
mkhaas@clemson.edu
Damion*/

//SOOOO many seg faults :(
//It reads in input fine and outputs it to the out.txt file when I only use main
//as soon as I use my functions it freaks out. I'm sorry for wasting your time.

#include <iostream>
#include <fstream>
#include "functions.h"

using namespace std;

int main (int argc, char* argv[]) {
    cout << "YO" << endl;
    int numStuds = 0;
    string line;
    if (argc != 3){
        cout << "Error needs two files (Input and Output)" << endl;
        return -1;
    }

    else {
        ifstream input;
        input.open(argv[1]);
        ofstream output;
        output.open(argv[2]);


        while (getline(input, line)) {
            //output << line << endl;
            numStuds++;
        }
        //output << numStuds << endl;

        input.close();
        input.clear();
        input.open(argv[1]);
        Student stud[numStuds];


        cout << "YO" << endl;
        readData(input, stud);
        ascNameSort(stud, numStuds);
        printData(output, stud, numStuds);
        input.close();
        output.close();
    }
}
