#include "main.h"
#include "stddef.h"

/**
 * _strstr - locates a substring
 * @haystack: the string to search
 * @needle: the substring to search for
 *
 * Return: a pointer to the beginning of the located substring,
 * or NULL if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	char *p1, *p2;

	while (*haystack)
	{
		p1 = haystack;
		p2 = needle;

		while (*p1 == *p2 && *p2)
		{
			p1++;
			p2++;
		}

		if (!*p2)
			return (haystack);

		haystack++;
	}

	return (NULL);
}
