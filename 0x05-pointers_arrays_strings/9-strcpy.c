#include <unistd.h>
#include <stdio.h>
#include "main.h"

/**
 * _strcpy - Copies the string pointed to by src to dest
 * @dest: Pointer to the destination buffer
 * @src: Pointer to the source string
 *
 * Return: Pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
    int i;

    /* Copy each character from src to dest */
    for (i = 0; src[i] != '\0'; i++)
    {
        dest[i] = src[i];
    }

    /* Copy the null terminator */
    dest[i] = '\0';

    /* Return a pointer to dest */
    return dest;
}

