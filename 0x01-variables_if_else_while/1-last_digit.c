#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point of the program
 * 
 * This function initializes a random number and checks the last digit of it.
 * it prints whether last digit is greater than 5, 0 or less than 6 and not 0.
 *
 * Return: 0 if the program completes successfully
 */
int main(void)
{
	int n;
	int lastDigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastDigit = n % 10;

	printf("Last digit of %d is %d and ", n, lastDigit);

	if (lastDigit > 5)
	{
		printf("is greater than 5\n");
	}
	else if (lastDigit == 0)
	{
		printf("is 0\n");
	}
	else if (lastDigit < 6 && lastDigit != 0)
	{
		printf("is less than 6 and not 0\n");
	}

	return (0);
}

