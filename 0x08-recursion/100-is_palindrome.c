#include <stdio.h>
#include <string.h>

int is_palindrome_helper(char *s, int start, int end);

/**
 * is_palindrome - returns 1 if a string is a palindrome and 0 if not
 * @s: string to check
 * Return: 1 if palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
	int len = strlen(s);

	if (len == 0)
		return (1);
	return (is_palindrome_helper(s, 0, len - 1));
}

/**
 * is_palindrome_helper - helper function to check if string is palindrome
 * @s: string to check
 * @start: start index
 * @end: end index
 * Return: 1 if palindrome, 0 otherwise
 */
int is_palindrome_helper(char *s, int start, int end)
{
	if (start >= end)
		return (1);
	if (s[start] != s[end])
		return (0);
	return (is_palindrome_helper(s, start + 1, end - 1));
}
