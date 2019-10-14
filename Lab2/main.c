/*Kellen Haas
CPSC 1021
Sec. 001 - F19 
mkhaas@clemson.edu
Damion*/




#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "functions.h"
#include "functions.c"







int main() {

	
	//Dynamically allocate memory for the char** array//
	char** name = (char**)malloc(2 * (sizeof(char*)));
	
	

	//Dynamically allocate memory for the rows that store the names//
	//The for loop loops through both rows//
	for (int r = 0; r < 2; r++) {
			name[r] = (char *)malloc(100 *(sizeof(char)));
	}
	

	//Receives user input of first and last name//
	printf("What is your first name?	");
	scanf("%s", name[0]);
	printf("What is your last name? 	");
	scanf("%s", name[1]);


	//Calls the function to calculate the size of the person's name//
	sizeOfName(name);   



return 0;
}



