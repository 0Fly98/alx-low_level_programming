#include <stdlib.h>
#include "main.h"

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: string to duplicate
 *
 * Return: pointer to the duplicated string, or NULL if it fails
 */
char *_strdup(char *str)
{
	char *new_str;
	int i, len = 0;

	if (str == NULL)
		return (NULL);

	while (str[len])
		len++;

	new_str = malloc((len + 1) *
			sizeof(char));

	if (new_str == NULL)
		return (NULL);

			for (i = 0; i < len; i++)
				new_str[i] = str[i];

	new_str[len] = '\0';

	return (new_str);
}
