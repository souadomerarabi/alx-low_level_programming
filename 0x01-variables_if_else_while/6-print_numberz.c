#include <stdlib.h>
#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * This function prints the numbers from 0 to 9 using only putchar function
 *
 * Return: 0 if the program completes successfully
 */
int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		putchar(n + '0');
	}
	putchar('\n');

	return (0);
}

