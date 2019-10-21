

//Includes the function header that has the prototypes in it//
#include "functions.h"


//Function that calculates the size of the first and last name//
void sizeOfName(char** name) {  
	int firstCount = 0;
	int lastCount = 0;

	//Loops through the first name to count characters//
	for (int i = 0; i < strlen(name[0]); i++) {
		firstCount++;
	}
	
	//Loops through the last name to count characters//
	for (int j = 0; j < strlen(name[1]); j++) {
		lastCount++;
	}

	
	//Calls the function to print the size of first and last names//
	printSizeOfName(&firstCount, &lastCount, name);

}

//Function that prints the size of first and last name//
//Takes a pointer for firstCount and lastCount as the parameters//
void printSizeOfName(int *firstCount, int *lastCount, char** name) {  
	

	printf("\n\n");
	
	//Prints the length of the first and last names in characters//
	printf("%s, Your first name is %d characters.\n", name[0], *firstCount);
	printf("Your last name, %s, is %d characters.\n", name[1], *lastCount);

	//Calls the function to reverse the first and last name strings//
	reverseString(firstCount, lastCount, name);

}

//Function reverses the strings taking pointers for the length of first and last names as parameters//
void reverseString(int *first, int *last, char** name) {  
	
	printf("\n");
	printf("Your name in reverse is:\n");

	//Loops through and prints each character of the first name in reverse//
	for (int k = *first; k >= 0; k--){
		printf("%c", name[0][k]);
	}

	printf("\n");

	//Loops through and prints each character of the last name in reverse//
	for (int c = *last; c >= 0; c--) {
		printf("%c", name[1][c]);
	}	
	
	

	printf("\n\n");

}
