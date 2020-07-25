#include <stdio.h>
int main(){
	int i, n;
	printf("This program will check whether the input is even or odd\n");
	printf("========================================================\n");
	printf("How many numbers do you want to check? ");
	scanf("%d", &n);

	for(i = 1; i <= n; i++){
		int number;
		printf("Enter number no. %d: ", i);
		scanf("%d", &number);
		if(number%2==0) 
			printf("%d is even!\n", number); 
		else
			printf("%d is odd!\n", number);
	}
	return 0;
}
