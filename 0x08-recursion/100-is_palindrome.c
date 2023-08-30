#include "main.h"

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: string to reverse
 *
 * Return: 1 if it is, 0 it's not
 */
int is_palindrome(char *s)
{
	int len = 0;
	int i = 0;

	while (s[len] != '\0')
		len++;
	while (i < len / 2)
	{
		if (s[i] != s[len - i - 1])
			return (0);
		i++;
	}
	return (1);
}
