/*Kellen Haas
CPSC 1020
Lab 1 
08/22/19*/

#include <stdio.h>

void flipSign(int*, int*);

int main(void) {
	int* ptr1 = 0;
	int* ptr2 = 0;
	int nums[2] = {0,0};

	printf("This program flips the signs of two integers. \nPlease enter the first integer and press enter: ");
	scanf("%d", &nums[0]);
	printf("Please enter the second integer and press enter: ");
	scanf("%d", &nums[1]);

	
	ptr1 = &nums[0];
	ptr2 = &nums[1];

		printf("The original values were %d and %d\n", nums[0], nums[1]);

		flipSign(&ptr1, &ptr2);
		printf("The new values are %d and %d\n", nums[0], nums[1]);

return 0;
}
	



void flipSign (int* x, int* y) {
	int temp;

	*x = *x * -1;
	*y = *y * -1;
	temp = *x;
	*x = *y;
	*y = temp;
	

}





