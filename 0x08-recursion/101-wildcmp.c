#include "main.h"

/**
 * wildcmp - Compare strings
 * @s1: pointer to string params
 * @s2: pointer to string params
 * Return: 0
 */

int wildcmp(char *s1, char *s2)
{
	int i = 0, j = 0;

	while (s1[i] != '\0' || s2[j] != '\0')
	{
		if (s2[j] == '*')
		{
			while (s2[j + 1] == '*')
				j++;
			if (s2[j + 1] == '\0')
				return (1);
			while (s1[i] != s2[j + 1] && s1[i] != '\0')
				i++;
			if (s1[i] == '\0')
				return (0);
		}
		i++;
		j++;
	}
	return (1);
}
