#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: This program prints the size of various computer types,
 * including char, int, long int, long long int, and float.
 *
 * Return: 0 (success)
 *         This function returns an integer value to indicate the execution status.
 *         The value 0 is returned to indicate successful execution of the program.
 */
int main(void)
{
        char a;
        int b;
        long int c;
        long long int d;
        float f;

        printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(a));
        printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(b));
        printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(c));
        printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(d));
        printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(f));

        return 0;
}
