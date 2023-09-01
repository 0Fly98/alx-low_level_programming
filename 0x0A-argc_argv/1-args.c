#include <stdio.h>
#include "main.h"

/**
 * main - print the number of arguments passed to the program
 * @argc: number of arguments (unused)
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char **argv)
{
	(void)argc;
	int count = 0;

	while (*argv++)
		count++;
	printf("%d\n", count - 1);
	return (0);
}
