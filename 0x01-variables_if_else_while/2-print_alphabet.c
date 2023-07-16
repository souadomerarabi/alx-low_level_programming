#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point of the program
 *
 * This function prints the alphabet in lowercase using only putchar function
 *
 * Return: 0 if the program completes successfully
 */
int main(void)
{
    char ch;

    for(ch = 'a'; ch <= 'z'; ch++)
    {
        putchar(ch);
    }
    putchar('\n');

    return (0);
}

