#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point of the program
 *
 * This function prints all possible combinations of single-digit numbers.
 *
 * Return: 0 if the program completes successfully
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');

		if (i < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
