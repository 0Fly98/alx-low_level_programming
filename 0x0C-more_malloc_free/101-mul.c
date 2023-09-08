#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - multiplies two positive numbers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int len1, len2, carry, i, j;
	int *result;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}

	len1 = strlen(argv[1]);
	len2 = strlen(argv[2]);

	result = calloc(len1 + len2, sizeof(int));
	if (!result)
		return (1);

	for (i = len1 - 1; i >= 0; i--)
	{
		carry = 0;
		for (j = len2 - 1; j >= 0; j--)
		{
			carry += (argv[1][i] - '0') + result[i + j + 1];
			result[i + j + 1] = carry % 10;
		}
		result[i + j + 1] += carry;
	}

	i = 0;
	while (i < len1 + len2 && result[i] == 0)
		i++;

	if (i == len1 + len2)
		putchar('0');

	for (; i < len1 + len2; i++)
		putchar(result[i] + '0');

	putchar('\n');
	free(result);
	return (0);
}
