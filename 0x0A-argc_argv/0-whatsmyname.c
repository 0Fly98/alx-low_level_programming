#include <stdio.h>
#include "main.h"

/**
 * main - Entry point of the program
 * @argc: The  number of arguments
 * @argv: An array of arguments
 *
 * Description: Prints the name of the program.
 *
 * Return: Always 0 (Success)
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("Program Name: %s\n", *argv);

	return 0;
}
