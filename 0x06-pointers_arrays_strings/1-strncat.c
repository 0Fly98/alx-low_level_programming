#include "main.h"
#include <stdio.h>
#include <unistd.h>

/**
 * _strncat - Concatenates two strings.
 * @dest: Destination string.
 * @src: Source string.
 * @n: Number of bytes from source string to concatenate.
 *
 * Return: A pointer to the resulting string dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
		;

	for (j = 0; j < n && src[j] != '\0'; j++)
		dest[i + j] = src[j];

	dest[i + j] = '\0';

	return (dest);
}

