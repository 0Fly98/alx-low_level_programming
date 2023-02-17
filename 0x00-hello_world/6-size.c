#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: always 0
 */

int main(void)
{
	printf("Size of a char: %lu bytes(s)\n", sizeof(char));
        printf("Size of an int: %lu bytes(s)\n", sizeof(int));
	printf("size of a long int: %lu bytes(s)\n", sizeof(long int));
	printf("Size of along long int: %lu bytes(s)\n", sizeof(long long int));
	printf("size of a float: %lu bytes(s)\n", sizeof(float));
	return (0);
}

