#include "main.h"
#include <unistd.h>
#include <stdio.h>

/**
 * _strcat - Concatenates two strings.
 *
 * @dest: A pointer to the destination string.
 * @src: A pointer to the source string.
 *
 * Return: A pointer to the resulting string dest.
 */
char *_strcat(char *dest, char *src)
{
    char *dest_end = dest;

    /* Find the end of the dest string */
    while (*dest_end)
    {
        dest_end++;
    }

    /* Copy the src string to the end of the dest string */
    while (*src)
    {
        *dest_end = *src;
        dest_end++;
        src++;
    }

    /* Add a terminating null byte */
    *dest_end = '\0';

    return (dest);
}

