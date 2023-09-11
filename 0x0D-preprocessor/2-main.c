#include <stdio.h>

/**
 * main - prints the name of the file it was compiled from
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char *file_name = __FILE__;

	puts(file_name);
	return (0);
}
