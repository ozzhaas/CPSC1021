#include <stdio.h>
#include <stdlib.h>


void fib1(int a[]);
void fib2(int* a);


//Main calls both fib programs and passes in the first two values of the array for fib 1 and the pointer for fib2//
int main(){
	int arr[12] = {0, 1};  
	 

	//Allocating space for pointer in memory//
	int* pointer = (int*)malloc(12 * (sizeof(int)));


	fib1(arr);
	fib2(pointer);


// free pointer free(pointer);
	free(pointer);


return 0;
}


//This function passes the parameter by value//
void fib1(int a[]){
	

	a[0] = 0;
	a[1] = 1;
	
	printf("%d ", a[0]);	
	printf("%d ", a[1]);

	for (int i = 2; i < 12; i++){
		a[i] = a[i - 2] + a[i - 1]; 
		printf("%d ", a[i]);
	}

	printf("\n");
	


}


//This function passes the parameter by reference because it uses pointers//
void fib2(int* a) {

	// Change array to a
	
	

	a[0] = 0;
	a[1] = 1;
	
	printf("%d ", a[0]);	
	printf("%d ", a[1]);

	for (int k = 2; k < 12; k++){
		a[k] = a[k - 1] + a[k - 2];
		printf("%d ", a[k]);
	}

	printf("\n");

}

