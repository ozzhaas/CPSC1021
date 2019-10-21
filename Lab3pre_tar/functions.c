/* Kellen Haas
CPSC 1021
Sec. 001 - F19 
09/22/19
mkhaas@clemson.edu
Damion*/


#include "functions.h"


//This file contains the functions that will feed into main.c//


//This function will add students to the record when the user chooses option 1 from the menu//
void addStudents(struct Student* s, int *numStudents){
	char firstName[25];
	int age;
	int cuid;
	float gpa;

	//Allocate memory for the size of the Student's first name (no larger than 25 characters)//
	s[*numStudents].firstName = (char*)malloc(25 * sizeof(char));	
	
	
	printf("Enter the first name of the student you would like to add:   ");
	scanf("%s", firstName);
	printf("How old is the student?   ");
	scanf("%d", &age);
	printf("What is their CUID number?   ");
	scanf("%d", &cuid);
	printf("What is the student's GPA?   ");
	scanf("%f", &gpa);
	
	//Takes the local variables above and points their data to the struct variables below//
	strcpy(s[*numStudents].firstName, firstName);
	s[*numStudents].age = age;
	s[*numStudents].cuid = cuid;
	s[*numStudents].GPA = gpa;	

	*numStudents += 1;		


}

//This function will print the current list of students in the record//
void printStudents(struct Student* s, int *numStudents) {
	

	if (*numStudents == 0){
		printf("There are no students in the records yet.\n\n");		
	}
	else {
		//Loops through all the students in the record and prints their information from the struct//
		for (int i = 0; i < *numStudents; i++){		
			
			printf("\n\n");
			printf("Student #%d\n", i+1);
			printf("\t\tStudent's name: %s\n", s[i].firstName);
			printf("\t\tAge: %d\n", s[i].age);
			printf("\t\tCUID: %d\n", s[i].cuid);
			printf("\t\tGPA: %.2f\n", s[i].GPA);	
		}
	}

}

//This function is extra credit//
//It will take the input of a struct called s and use that to change a specific student's GPA//
void addGPA(struct Student* s){
	int input = 0;
	int CUID = 0;
	float gpa = 0;

	bool cuidCheck = true;

	//Checks the user entered CUID with the CUID's in the student records to find a match//
	printf("What is the student's CUID?   ");
	scanf("%d", &CUID);
	for (int j = 0; j < 10; j++){
		if (CUID != s[j].cuid) {
			continue;
			cuidCheck = false;
		}
		else {
			//If it finds a matching CUID it will ask the user to confirm the student's name//
			printf("CONFIRM: Student's name is: %s\nPress 1 for yes or 0 for no.\n", s[j].firstName);
			scanf("%d", &input);
			cuidCheck = true;
			//It will then ask the user to insert the new GPA if that is the correct student//
			if (input == 1) {
				printf("Insert a new GPA:   ");
				scanf("%f", &gpa);
				s[j].GPA = gpa;
					cuidCheck = true;
			}
			//If it is not the correct student, it will have the user enter a different CUID//
			else {
				printf("Enter a different CUID:   ");
				scanf("%d", &CUID);
				for (int j = 0; j < 10; j++){
					if (CUID == s[j].cuid) {
						printf("CONFIRM: Student's name is: %s\nPress 1 for yes or 0 for no.\n", s[j].firstName);
						scanf("%d", &input);
						cuidCheck = true;
						if (input == 1) {
							printf("Insert a new GPA:   ");
							scanf("%f", &gpa);
							s[j].GPA = gpa;
								cuidCheck = true;
						}
					}
				}
			}
		}
	}
	//If no match is found it returns that the CUID is not in the records.//
	if (cuidCheck == false) {
		printf("\nCUID is not in our records.\n");
	}
	printf("Returning to Menu...\n\n");
}

//This function will be called the print the menu every time the user finishes a specific task//
int printMenu(){

	int userInput = 0;

	printf("\n\n");
	printf("Please select an option from the menu: \n");
	printf("1. Add a student\n");
	printf("2. Print students currently saved\n");
	printf("3. Change GPA of a student\n");
	printf("4. End program\n");
	printf("\n");

	//It will also read in the user input to do the next task that they select from 1-4//
	scanf("%d", &userInput);



return (userInput);

}
