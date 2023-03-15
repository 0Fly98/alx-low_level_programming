#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_tab - prints an array of the string
 * @tab: The array to pint
 *
 * Return: nothing
 */
void print_tab(char **tab)
{
	int i;

	for (i = 0; tab[i] != NULL; ++i)
	{
		printf("%s\n", tab[i]);
	}
}
/**
 * main - check for the code for ALX School students.
 *
 * Return: 1 if an error occured, 0 otherwise
 */
int main(void)
{
	char **tab;

	tab = strtow("	ALX School	#cisfun		");
	if (tab == NULL)
	{
		printf("Failed\n");
		return (1);
	}
	print_tab(tab);
	return (1);
}
