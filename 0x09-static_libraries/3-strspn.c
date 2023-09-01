#include "main.h"

/**
 * _strspn - calculates the length of the initial segment of s
 * which consists entirely of characters in accept
 * @s: the string to search
 * @accept: the characters to search for
 *
 * Return: the number of characters in the initial segment of s
 * which consist only of characters from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int n = 0;
	char *p;

	while (*s)
	{
		for (p = accept; *p; p++)
		{
			if (*s == *p)
			{
				n++;
				break;
			}
		}

		if (!*p)
			break;

		s++;
	}

	return (n);
}
