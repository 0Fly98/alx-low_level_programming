#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer to the concatenated string
 */
char *str_concat(char *s1, char *s2)
{
	int len1 = (s1 == NULL) ? 0 : strlen(s1);
	int len2 = (s2 == NULL) ? 0 : strlen(s2);
	char *result = malloc(len1 + len2 + 1);

	if (result == NULL)
		return (NULL);

	if (s1 != NULL)
		strcpy(result, s1);
	if (s2 != NULL)
		strcpy(result + len1, s2);

	return (result);
}
