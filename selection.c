#include <stdio.h>
int main(){
	int input;
	printf("Enter a number: \n");
	scanf("%d", &input);
	// if statement	
	printf("Checking the parity of a number using if statement\n");
	if(input % 2 == 0){
		printf("%d is even\n", input);
	} else {
		printf("%d is odd\n", input);
	}

	// ternary operator
	printf("Checking the parity of a number using ternary operator\n");
	(input % 2 == 0) ? printf("%d is even\n", input) : printf("%d is odd\n", input);

	// switch statement
	printf("Using swich statement to print some stuff\n");
	switch(input){
		case 0:
			printf("You entered the number zero!\n");
			break;
		case 1: 
			printf("You entered the number one!\n");
			break;

		case 2: 
			printf("You entered the number two!\n");
			break;
		default:
			printf("You didn't enter zero, one, or two\n");
	}


	return 0;
}
