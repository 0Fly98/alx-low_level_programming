#include "main.h"
#include <stdio.h>
#include <unistd.h>

/**
 * _strncat - Concatenates two strings using at most n bytes from src.
 *
 * @dest: A pointer to the destination string.
 * @src: A pointer to the source string.
 * @n: The maximum number of bytes to be copied from src.
 *
 * Return: A pointer to the resulting string dest.
 */
char *_strncat(char *dest, char *src, int n)
{
    char *dest_end = dest;

    /* Find the end of the dest string */
    while (*dest_end)
    {
        dest_end++;
    }

    /* Copy the src string to the end of the dest string, up to n bytes */
    while (*src && n > 0)
    {
        *dest_end = *src;
        dest_end++;
        src++;
        n--;
    }

    /* Add a terminating null byte */
    *dest_end = '\0';

    return dest;
}

