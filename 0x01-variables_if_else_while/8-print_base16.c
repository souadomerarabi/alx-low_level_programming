#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point of the program
 *
 * This function prints all the numbers of base 16 in lowercase
 *
 * Return: 0 if the program completes successfully
 */
int main(void)
{
	int i;

	for (i = 0; i < 16; i++)
	{
		if(i < 10)
		{
			putchar(i + '0');
		}
		else
		{
			putchar(i - 10 + 'a');
		}
	}
	putchar('\n');

	return (0);
}
