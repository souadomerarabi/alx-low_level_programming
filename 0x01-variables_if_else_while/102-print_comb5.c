#include <stdlib.h>
#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * This function prints all different combinations of two two-digit numbers
 *
 * Return: 0 if the program completes successfully
 */
int main(void)
{
	int i, j;

	for (i = 0; i < 100; i++)
	{
		for (j = i + 1; j < 100; j++)
		{
			putchar(i / 10 + '0');
			putchar(i % 10 + '0');
			putchar(' ');
			putchar(j / 10 + '0');
			putchar(j % 10 + '0');

			if (i < 98 || j < 99)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}
