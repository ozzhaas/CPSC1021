/* Kellen Haas
CPSC 1021
Sec. 001 - F19 
09/22/19
mkhaas@clemson.edu
Damion*/


#include "functions.h"
#include <stdio.h>
#include <stdlib.h>




int main() {


	int numofstuds = 0;

	//Allocates memory for the struct students//
	struct Student* students = malloc(10 * sizeof(struct Student));



	int userinput = printMenu();

	//While the user has not ended the program do the following//
	while (userinput != 4) {
		if (userinput == 1) {
			addStudents(students, &numofstuds);
		}
		else if (userinput == 2) {
			printStudents(students, &numofstuds);
		}
		else if (userinput == 3) {
			addGPA(students);
		}
		else {
			printf("That was not a menu option. Try again.\n");
		}

	userinput = printMenu();

	}

	//Frees the dynamically allocated memory so that the heap does not overfill//
	for (int h = 0; h < 10; ++h) {
	  free(students[h].firstName);
	}
	free (students);

return 0;
}
