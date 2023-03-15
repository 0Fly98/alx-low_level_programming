#include "main.h"
#include <stdio.h>
#include <stddef.h>

/**
 * _strstr - finds the first occurrence of a substring in a string
 * @haystack: the string to search within
 * @needle: the substring to search for
 *
 * Return: a pointer to the beginning of the located substring,
 *         or NULL if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	char *h, *n;

	while (*haystack)
	{
		h = haystack;
		n = needle;

		while (*haystack && *n && *haystack == *n)
		{
			haystack++;
			n++;
		}

		if (!*n)
			return (h);
		haystack = h + 1;
	}

	return NULL;
}
