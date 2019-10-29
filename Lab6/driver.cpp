/* Kellen Haas
CPSC 1021
Sec. 001 - F19
10/08/19
mkhaas@clemson.edu
Damion*/



#include <iostream>
#include <fstream>
#include "functions.h"

using namespace std;

int main (int argc, char* argv[]) {
    int numStuds = 0;
    char userInput = 'a';
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
        readData(input, stud);
        cout << "Do you want to sort the data by last name in ascending or descending order (type a for ascending or d for descending): ";
        cin >> userInput;

        if (userInput == 'a') {
            ascNameSort(stud, numStuds);
        }
        else if (userInput == 'd') {
            decNameSort(stud, numStuds);
        }
        else {
            cout << "That is not a sort option. Try again: ";
            cin >> userInput;
            if (userInput == 'a') {
                ascNameSort(stud, numStuds);
            }
            else if (userInput == 'd') {
                decNameSort(stud, numStuds);
            }
            else {
                cout << "that is not a sort option. Exiting program." << endl;
            }
        }

        printData(output, stud, numStuds);
        input.close();
        output.close();
    }
}
