#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * _strchr - Locates a character in a string.
 *
 * @s: The string to be searched.
 * @c: The character to be located.
 *
 * Return: A pointer to the first occurrence of charcter @c in @s,
 *	or NuLL if the charcter is not found.
 */
char *_strchr(char *s, char c)
{
	return strchr(s, c);
}
