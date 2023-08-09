#include "main.h"
#include <stdio.h>

/**
 * print_all_arguments - Prints all arguments recieved
 * @argc_val: Number of arguments
 * @argv_list: List of arguments
 *
 * Description: Pirnts all the arguments recied, each on a new line.
 *
 * Return: Always returns 0 (success)
 */
int print_all_arguments(int argc_val, char *argv_list[])
{
	int index;

	for (index = 0; index < argc_val; index++)
	{
		printf("%s\n", argv_list[index]);
	}

	return (0);
}

/**
 * main - Entry point of the program
 * @argc: Number of arguments
 * @argv: Array returns 0 (success)
 */
int main(int argc, char *argv[])
{
	return print_all_arguments(argc, argv);
}
