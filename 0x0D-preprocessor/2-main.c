#include <sdtio.h>

/**
 * main - prints the name of the file
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char *file_name = _FILE_;

	puts(file_name);
	return (0);
}
