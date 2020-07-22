#include <stdio.h>
int main(){
	int number;
	int temp, i, j;
	printf("Insert a number!\n");
	scanf("%d", &number);
	temp = number;
	// print "Hello world" n times
	for(; temp > 0; temp--)
		printf("Hello world!\n");
	puts("+++++++++++++++++++++++++++++++++++++++++++");	
	// print "Hello world" n times, but the number variable is unchanged
	for(i = 0; i < number; i++)
		printf("Hello world!\n");

	for(i = 0; i < number; i++){
		for(j = 0; j < i; j++){
			printf("*");
		}
		puts("");
	}
	// while loop
	return 0;
}
