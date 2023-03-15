#include "main.h"
#include <stdio.h>
#include <unistd.h>

/**
 * _strchr - locate character in string
 * @s: string to search
 * @c: character to loacate
 *
 * Return: pointers to first occurrence of c in s, NULL if not found
 */
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
			return (s);
		s++;
	}
	if (c == '\0')
		return (s);
	return (NULL);
}
