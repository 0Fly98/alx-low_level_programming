#include <stdio.h>
#include <unistd.h>
/**
 * main - program prints the name of file it was compiled from
 * followed by new line,
 *
 * Return: 0 success.
 */
int main(void)
{
	printf("This program was compiled from file %s\n", __FILE__);
	return (0);
}
