#include <stdio.h>
#include "main.h"

/**
 * main - Entry point of the program
 * @ac: The count of arguments
 * @av: Array of argument strings
 *
 * Description: Prints the number of arguments passed
 *
 * Return: Always return 0 (Success)
 */
int main(int ac, char *av[])
{
	(void)av;
	printf("Arguments Count: %d\n", ac - 1);

	return (0);
}
