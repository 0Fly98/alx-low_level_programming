#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: maximum number of characters to concatenate from s2
 *
 * Return: pointer to newly allocated space in memory containing
 * concatenated string, or NULL if function fails
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat_str;
	unsigned int len_s1 = 0, len_s2 = 0, i;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[len_s1])
		len_s1++;
	while (s2[len_s2] && len_s2 < n)
		len_s2++;

	concat_str = malloc(sizeof(char) *
			(len_s1 + len_s2 + 1));
	if (concat_str == NULL)
		return (NULL);

	for (i = 0; i < len_s1; i++)
		concat_str[i] = s1[i];
	for (i = 0; i < len_s2; i++)
		concat_str[i + len_s1] = s2[i];
	concat_str[len_s1 + len_s2] = '\0';
	return (concat_str);
}
