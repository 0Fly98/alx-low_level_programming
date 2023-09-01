#include "main.h"
/**
 * _strpbrk - Entry point
 * @a: input
 * @accept: input
 * Return: Always 0
 */
char *_strpbrk(char *a, char *accept)
{
	int p;

	while (*a)
	{
		for (p = 0; accept[p]; p++)
		{
		if (*a == accept[p])
		return (a);
		}
	a++;
	}

return ('\0');
}
