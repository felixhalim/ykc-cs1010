#include <stdio.h> 	     
int main(){  				 
	int a, b, c, d;
	scanf("%d %d", &a, &b); // receive input from standard input
	c = a + b;		// i.e. the keyboard
	printf("The value of %d + %d is %d\n", a, b, c);
	d = a * b;	
	printf("The value of %d * %d is %d\n", a, b, d);
	return 0;
}
