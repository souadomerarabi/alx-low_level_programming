#include <stdio.h>  /* Include standard I/O library for printf function */
#include <stdlib.h> /* Include standard library for rand and srand function */
#include <time.h>   /* Include time library for time function */

/**
 * main - Entry point of the program
 * 
 * This function initializes a random number and checks if it is positive,
 * negative, or zero, printing the result to the console.
 * 
 * Return: 0 if the program completes successfully
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	/* print the number */
	printf("%d ", n);
	
	if(n == 0)
	{
		printf("is zero\n");
	}
	else if(n > 0)
	{
		printf("is positive\n");
	}
	else if(n < 0)
	{
		printf("is negative\n");
	}

	return (0);
}

