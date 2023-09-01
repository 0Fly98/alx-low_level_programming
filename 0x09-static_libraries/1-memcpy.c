#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: the destination memory where it is stored
 * @src: the source memory where it is copied from
 * @n: the number of bytes to copy
 *
 * Return: the destination memory with n bytes changed
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
