#include "main.h"

/**
 * _memset - fills a block of memory with a specific value
 * @s: the starting address of memory to be filled
 * @b: the desired value
 * @n: the number of bytes to be changed
 *
 * Return: the changed array with new value for n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
