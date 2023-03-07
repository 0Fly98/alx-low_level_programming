#include "main.h"
#include <stdio.h>

/**
 * _strtstr - finds the first occurrence of a substring in a string
 * @haystack: string to search in
 * @needle: substring to search for
 *
 * Return: pointer to the beginning of the located substring, or NULL if
 *  substringis not found
 */
char *_strstr(char *haystack, char *needle)
{
	char *h, *n;

	while (*haystack)
	{
		h = haystack;
		h = needle;

		while (*haystack && *n && *haystack == *n)
		{
			haystack++;
			n++;
		}

		if (!*n)
			return (h);
		haystack = h + 1;
	}

	return (NULL);
}
