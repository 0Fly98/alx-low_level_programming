#include "main.h"
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * _strpbrk - locates the first occurrence in the string s of any of
 * the bytes in the string accept
 * @s: string to search
 * @accept: string containing the characters to match
 *
 * Return: pointer to the byte in s that matches one of the bytes in accept,
 * or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	return (strpbrk(s, accept));
}
