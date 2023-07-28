#include "main.h"
#include <string.h>

/**
 * rot13 - encode a string using rot13
 * @s: string to be encoded
 *
 * Return: pointer to the encoded string
 */
char *rot13(char *s)
{
    int i, j;
    char alphabet[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char rot13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

    for (i = 0; s[i]; i++)
    {
        for (j = 0; alphabet[j]; j++)
        {
            if (s[i] == alphabet[j])
            {
                s[i] = rot13[j];
                break;
            }
        }
    }

    return (s);
}

